/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fy_addwmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:47:59 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 08:48:06 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_addwmin(char *str, t_flag flag, int len)
{
	int		i;
	char	*tab;

	i = 0;
	if (!(tab = malloc(sizeof(char) * flag.width + 1)))
		return (NULL);
	tab[flag.width] = '\0';
	while (i < (len))
	{
		tab[i] = str[i];
		i++;
	}
	while (i < flag.width)
	{
		tab[i] = ' ';
		i++;
	}
	free(str);
	return (tab);
}
