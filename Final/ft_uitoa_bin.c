/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_bin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 02:32:29 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 02:32:40 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_uitoa_malloc(unsigned int n, int j)
{
	char	*tab;

	if (!(tab = (char *)malloc(sizeof(*tab) * (j + 1))))
		return (0);
	tab[j] = '\0';
	if (n == 0)
		tab[0] = 48;
	while (n > 0)
	{
		tab[j - 1] = (n % 2) + 48;
		n = n / 2;
		j--;
	}
	return (tab);
}

char		*ft_uitoa_bin(unsigned int n)
{
	unsigned int	i;
	int				j;

	i = n;
	j = 0;
	if (i == 0)
		j++;
	while (i > 0)
	{
		i = i / 2;
		j++;
	}
	return (ft_uitoa_malloc(n, j));
}
