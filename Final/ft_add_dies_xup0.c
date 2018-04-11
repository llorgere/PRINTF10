/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_dies_xup0.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:55:54 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:25:54 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_add_dies_xup0_malloc(t_flag flag)
{
	char	*tab;

	if (!(tab = malloc(sizeof(char) * flag.width + 2)))
		return (0);
	tab[0] = '0';
	tab[1] = 'X';
	return (tab);
}

char		*ft_add_dies_xup0(char *str, t_flag flag, int len)
{
	char	*tab;
	int		i;

	i = 2;
	if (flag.width > len + 1)
	{
		str[0] = '0';
		str[1] = 'X';
		return (str);
	}
	else if (flag.width == len + 1)
	{
		if (!(tab = ft_add_dies_xup0_malloc(flag)))
			return (0);
		while (i <= flag.width + 1)
		{
			tab[i] = '\0';
			i++;
		}
		tab = ft_strcat(tab, str + 1);
		free(str);
		return (tab);
	}
	else
		return (ft_add_dies_xup(str, len));
}
