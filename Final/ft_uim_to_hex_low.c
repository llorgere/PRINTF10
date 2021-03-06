/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uim_to_hex_low.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 02:29:51 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 02:31:55 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_uim_to_hex_malloc(uintmax_t n, int j)
{
	char	*tab;

	if (!(tab = (char *)malloc(sizeof(*tab) * (j + 1))))
		return (0);
	tab[j] = '\0';
	if (n == 0)
		tab[0] = 48;
	while (n > 0)
	{
		if (n % 16 < 10)
			tab[j - 1] = (n % 16) + '0';
		else
			tab[j - 1] = (n % 16) + 'a' - 10;
		n = n / 16;
		j--;
	}
	return (tab);
}

char		*ft_uim_to_hex_low(uintmax_t n)
{
	uintmax_t	i;
	int			j;

	i = n;
	j = 0;
	if (i == 0)
		j++;
	while (i > 0)
	{
		i = i / 16;
		j++;
	}
	return (ft_uim_to_hex_malloc(n, j));
}
