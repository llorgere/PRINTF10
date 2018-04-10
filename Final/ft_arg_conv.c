/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 02:28:07 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 01:26:08 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	t_flag	ft_conv_adjust(t_flag flag)
{
	if (flag.j == 1)
	{
		flag.h = 0;
		flag.l = 0;
		flag.z = 0;
	}
	else if (flag.l == 2)
	{
		flag.h = 0;
		flag.z = 0;
	}
	else if(flag.z == 1)
	{
		flag.l = 0;
		flag.h = 0;
	}
	else if(flag.l == 1)
		flag.h = 0;
	else
		return (flag);
	return (flag);
}

static	int			ft_what_convn(t_flag flag, char *str)
{
	flag = ft_conv_adjust(flag);
	if (flag.j == 1)
		return (ft_two_j_conv(str));
	else if(flag.l == 2)
		return (ft_three_l_conv(str));
	else if (flag.z == 1)
		return (ft_two_z_conv(str));
	else if (flag.l == 1)
		return (ft_two_l_conv(str));
	else if (flag.h == 1)
		return (ft_two_h_conv(str));
	else if(flag.h == 2)
		return (ft_three_h_conv(str));
	else
		return (ft_one_conv(str));
}

t_flag		ft_arg_conv(char *tab)
{
	int			i;
	int			tmp;
	t_flag		flag;
	int			count;
	char		*tabpw;

	i = 1;
	tmp = 0;
	count = 0;
	flag.conv_num = 0;
	flag.width = -1;
	flag.preci = -1;
	flag.minus = 0;
	flag.plus = 0;
	flag.dies = 0;
	flag.zero = 0;
	flag.space = 0;
	flag.point = 0;
	flag.j = 0;
	flag.h = 0;
	flag.l = 0;
	flag.z = 0;
	flag.tab = NULL;
	flag.c = 0;
	flag.w = -1;

	while (tab[i] != 'd' && tab[i] != 'i' && tab[i] != 's' &&
			tab[i] != 'p' && tab[i] != 'S' && tab[i] !='D' &&
			tab[i] != 'U' && tab[i] !='O' && tab[i] != 'o' &&
			tab[i] != 'u' && tab[i] !='x' && tab[i] !='X' &&
			tab[i] != 'c' && tab[i] !='C'  && tab[i] !='\0' && tab[i] != '%')
	{
		tmp = count;
		if ((count == tmp) && tab[i] == '-' && flag.minus == 0 &&
				flag.width < 0 && flag.preci < 0)
		{
			flag.minus++;
			i++;
			count++;
		}
		if ((count == tmp) && tab[i] == '+' && flag.plus == 0)
		{
			flag.plus++;
			i++;
			count++;
		}
		if ((count == tmp) && tab[i] == 'l' && flag.l < 2)
		{
			flag.l++;
			i++;
			count++;
		}
		if ((count == tmp) && tab[i] == 'h' && flag.h < 2)
		{
			flag.h++;
			i++;
			count++;
		}
		if ((count == tmp) && tab[i] == 'j' && flag.j == 0)
		{
			flag.j++;
			i++;
			count++;
		}
		if ((count == tmp) && tab[i] == 'z' && flag.z == 0)
		{
			flag.z++;
			i++;
			count++;
		}
		if ((count == tmp) && tab[i] == ' ' && flag.space == 0 &&
				flag.width < 0 && flag.preci < 0)
		{
			flag.space++;
			i++;
			count++;
		}
		if ((count == tmp) && tab[i] == '0' && flag.zero == 0 &&
				flag.width < 0 && flag.preci < 0)
		{
			flag.zero++;
			i++;
			count++;
		}
		if ((count == tmp) && tab[i] == '#' && flag.dies == 0)
		{
			flag.dies++;
			i++;
			count++;
		}
		if ((count == tmp) && tab[i] > '0' && tab[i] <= '9' && flag.width < 0 && flag.preci < 0)
		{
			count++;
			tmp = i;
			while (tab[i] >= '0' && tab[i] <= '9')
				i++;
			tabpw = ft_strndup(tab + tmp, i - tmp + 1);
			flag.width = ft_atoi(tabpw);
			free(tabpw);
			tmp = count--;
		}
		if ((count == tmp) && tab[i] == '.' && flag.preci < 0)
		{
			count++;
			if (tab[i + 1] <= '0' || tab[i + 1] > '9')
			{
				flag.preci = 0;
				i++;
			}
			else
			{
				i++;
				tmp = i;
				while (tab[i] > '0' && tab[i] <= '9')
					i++;
				tabpw = ft_strndup(tab + tmp, i - tmp + 1);
				flag.preci = ft_atoi(tabpw);
				tmp = count--;
				free(tabpw);
			}
		}
		if ((count == tmp) && (tab[i] == '+' || tab[i] == ' ' ||
				tab[i] == '#' || tab[i] == '-' || tab[i] == '0' ||
				tab[i] == '.' || (tab[i] >= '0' && tab[i] <= '9') ||
				tab[i] == 'j' || tab[i] == 'h' || tab[i] == 'l' ||
				tab[i] == 'z'))
		{
			count++;
			i++;
		}
		if(count == tmp)
		{
			count++;
			tmp = i;
			while (tab[i] != '\0')
				i++;
			if (tmp != i)
			{
				flag.tab = ft_strndup(tab + tmp + 1, i - tmp + 1);
				flag.c = tab[tmp];
			}
			flag.conv_num = -1;
			tmp = count--;
			return (flag);
		}
	}
		flag.conv_num = ft_what_convn(flag, tab + i);
		return (flag);
}
