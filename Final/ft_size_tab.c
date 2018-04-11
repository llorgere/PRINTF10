/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 16:44:40 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 04:11:45 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_first(const char *tmp, int i)
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
			i++;
			while (tmp[i] != '\0' && tmp[i] != '%')
				i++;
			if (tmp[i] == '%')
				i--;
			break ;
		}
	}
	return (i);
}

static int	ft_second(const char *tmp, int i, int *sizetab)
{
	int		j;

	j = 1;
	while (tmp[i] != '%' && tmp[i] != '\0')
	{
		i++;
		if (tmp[i] == '\0' || tmp[i] == '%')
			*sizetab = *sizetab + j;
	}
	return (i);
}

int			ft_size_tab(const char *str)
{
	int			i;
	int			sizetab;
	const char	*tmp;

	i = 0;
	tmp = str;
	sizetab = 0;
	while (tmp[i] != '\0')
	{
		i = ft_second(tmp, i, &sizetab);
		if (tmp[i] == '\0')
			return (sizetab);
		else if (tmp[i] == '%')
		{
			i = ft_first(tmp, i);
			sizetab++;
			if (tmp[i] == '\0')
				return (sizetab);
			i++;
		}
		else
			i++;
	}
	return (sizetab);
}
