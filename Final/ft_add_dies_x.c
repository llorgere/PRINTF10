/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_dies_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:05:21 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:28:08 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_add_dies_x(char *str, int len)
{
	char	*tab;
	int		i;

	i = 2;
	if (!(tab = malloc(sizeof(char) * 3 + len)))
		return (NULL);
	tab[0] = '0';
	tab[1] = 'x';
	while (i <= len + 2)
	{
		tab[i] = '\0';
		i++;
	}
	tab = ft_strcat(tab, str);
	free(str);
	return (tab);
}
