/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 02:28:07 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 06:53:43 by llorgere         ###   ########.fr       */
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
	else if (flag.z == 1)
	{
		flag.l = 0;
		flag.h = 0;
	}
	else if (flag.l == 1)
		flag.h = 0;
	else
		return (flag);
	return (flag);
}

static t_flag	ft_flag_init(void)
{
	t_flag	flag;

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
	return (flag);
}

static	int		ft_what_convn(t_flag flag, char *str)
{
	flag = ft_conv_adjust(flag);
	if (flag.j == 1)
		return (ft_two_j_conv(str));
	else if (flag.l == 2)
		return (ft_three_l_conv(str));
	else if (flag.z == 1)
		return (ft_two_z_conv(str));
	else if (flag.l == 1)
		return (ft_two_l_conv(str));
	else if (flag.h == 1)
		return (ft_two_h_conv(str));
	else if (flag.h == 2)
		return (ft_three_h_conv(str));
	else
		return (ft_one_conv(str));
}

static t_int2	ft_initwo(void)
{
	t_int2	a;

	a.i = 1;
	a.tmp = 0;
	a.count = 0;
	return (a);
}

t_flag			ft_arg_conv(char *tab)
{
	t_flag		flag;
	t_int2		a;

	a = ft_initwo();
	flag = ft_flag_init();
	while (tab[a.i] != 'd' && tab[a.i] != 'i' && tab[a.i] != 's' &&
			tab[a.i] != 'p' && tab[a.i] != 'S' && tab[a.i] != 'D' &&
			tab[a.i] != 'U' && tab[a.i] != 'O' && tab[a.i] != 'o' &&
			tab[a.i] != 'u' && tab[a.i] != 'x' && tab[a.i] != 'X' &&
			tab[a.i] != 'c' && tab[a.i] != 'C' && tab[a.i] != '\0' &&
			tab[a.i] != '%')
	{
		a.tmp = a.count;
		flag = ft_arg_total(flag, &a, tab);
		a = ft_arg_sixth(a, tab);
		if (a.count == a.tmp)
		{
			flag = ft_arg_seventh(flag, &a, tab);
			return (flag);
		}
	}
	flag.conv_num = ft_what_convn(flag, tab + a.i);
	return (flag);
}
