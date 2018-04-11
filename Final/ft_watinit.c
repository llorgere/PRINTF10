/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_watinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 04:25:15 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 05:35:53 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int			ft_first(const char *tmp, int i)
{
	i++;
	while (tmp[i] != 'd' && tmp[i] != 'i' && tmp[i] != 's' &&
			tmp[i] != 'p' && tmp[i] != 'S' && tmp[i] != 'D' &&
			tmp[i] != 'U' && tmp[i] != 'O' && tmp[i] != 'o' &&
			tmp[i] != 'u' && tmp[i] != 'x' && tmp[i] != 'X' &&
			tmp[i] != 'c' && tmp[i] != 'C' && tmp[i] != '\0' &&
			tmp[i] != '%')
	{
		if (tmp[i] == '+' || tmp[i] == ' ' || tmp[i] == '#' ||
				tmp[i] == '-' || tmp[i] == '.' || (tmp[i] >= '0' &&
					tmp[i] <= '9') || tmp[i] == 'h' || tmp[i] == 'j' ||
				tmp[i] == 'z' || tmp[i] == 'l')
			i++;
		else
		{
			while (tmp[i] != '%' && tmp[i] != '\0')
				i++;
			if (tmp[i] == '%')
				i--;
			break ;
		}
	}
	return (i);
}

static t_wii		ft_second(const char *tmp, t_wii wiit, t_int *a)
{
	wiit.tab[a->j] = ft_strndup(tmp + a->k, (a->i - a->k + 1));
	wiit.nb_conv++;
	wiit.pos_conv[a->j] = 1;
	a->j = a->j + 1;
	return (wiit);
}

static t_int		ft_t_init(void)
{
	t_int	a;

	a.i = 0;
	a.j = 0;
	a.k = 0;
	return (a);
}

static t_wii		ft_third(const char *tmp, t_int *a, t_wii wiit)
{
	a->k = a->i;
	while (tmp[a->i] != '%' && tmp[a->i] != '\0')
	{
		a->i++;
		if (tmp[a->i] == '\0' || tmp[a->i] == '%')
		{
			wiit.tab[a->j] = ft_strndup(tmp + a->k, (a->i - a->k));
			wiit.pos_conv[a->j] = 0;
			a->j++;
		}
	}
	return (wiit);
}

t_wii				ft_watinit(const char *arg0, int sizetab)
{
	t_int		a;
	const char	*tmp;
	t_wii		wiit;

	a = ft_t_init();
	wiit = ft_wii_init(sizetab);
	tmp = arg0;
	while (tmp[a.i] != '\0')
	{
		wiit = ft_third(tmp, &a, wiit);
		if (tmp[a.i] == '\0')
			return (wiit);
		else if (tmp[a.i] == '%')
		{
			a.k = a.i;
			a.i = ft_first(tmp, a.i);
			wiit = ft_second(tmp, wiit, &a);
			if (tmp[a.i] == '\0')
				return (wiit);
			a.i++;
		}
		else
			a.i++;
	}
	return (wiit);
}
