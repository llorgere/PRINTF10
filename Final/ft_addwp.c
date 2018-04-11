/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addwp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:44:24 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:24:37 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_addwp(char *str, t_flag flag, int len)
{
	char	*tab;
	int		i;

	i = 0;
	if (!(tab = malloc(sizeof(char) * (flag.width + 1))))
		return (NULL);
	while (i < 2)
	{
		tab[i] = *str;
		i++;
		str++;
	}
	while (i < (flag.width - len + 2))
	{
		tab[i] = '0';
		i++;
	}
	while (i < flag.width)
	{
		tab[i] = *str;
		i++;
		str++;
	}
	tab[i] = '\0';
	return (tab);
}
