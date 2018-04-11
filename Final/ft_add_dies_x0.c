/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_dies_x0.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:26:41 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:27:03 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_add_dies_x0_malloc(t_flag flag)
{
	char*tab;

	if (!(tab = malloc(sizeof(char) * flag.width + 2)))
		return (0);
	tab[0] = '0';
	tab[1] = 'x';
	return (tab);
}

char	*ft_add_dies_x0(char *str	, t_flag flag, int len)
{
	char	*tab;
	int		i;

	i = 2;
	if (flag.width > len + 1)
	{
		str[0] = '0';
		str[1] = 'x';
		return (str);
	}
	else if (flag.width == len + 1)
	{
		if (!(tab = ft_add_dies_x0_malloc(flag)))
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
		return (ft_add_dies_x(str, len));
}
