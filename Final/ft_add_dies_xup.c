/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_dies_xup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:04:07 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:04:09 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_add_dies_xup(char *str, int len)
{
	char	*tab;
	int		i;

	i = 2;
	if (!(tab = malloc(sizeof(char) * 3 + len)))
		return (NULL);
	tab[0] = '0';
	tab[1] = 'X';
	while (i <= len + 2)
	{
		tab[i] = '\0';
		i++;
	}
	tab = ft_strcat(tab, str);
	free(str);
	return (tab);
}
