/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:52:02 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 08:52:05 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_addw(char *str, t_flag flag, int len)
{
	int		i;
	char	*tab;

	i = 0;
	if (!(tab = malloc(sizeof(char) * flag.width + 1)))
		return (NULL);
	tab[flag.width] = '\0';
	while (i < (flag.width - len))
	{
		tab[i] = ' ';
		i++;
	}
	while (i < flag.width)
	{
		tab[i] = '\0';
		i++;
	}
	tab = ft_strcat(tab, str);
	free(str);
	return (tab);
}
