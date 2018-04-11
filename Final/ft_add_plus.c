/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_plus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:12:39 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:12:44 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_add_plus(char *str, int len)
{
	char	*tab;
	int		i;

	i = 1;
	if (str[0] == '-')
		return (str);
	else
	{
		if (!(tab = malloc(sizeof(char) * 2 + len)))
			return (NULL);
		tab[0] = '+';
		while (i <= len + 1)
		{
			tab[i] = '\0';
			i++;
		}
		tab = ft_strcat(tab, str);
		free(str);
		return (tab);
	}
}
