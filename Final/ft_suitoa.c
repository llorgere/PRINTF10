/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_suitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 02:28:35 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 02:28:53 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_suitoa_malloc(unsigned short int n, int j)
{
	char	*tab;

	if (!(tab = (char *)malloc(sizeof(*tab) * (j + 1))))
		return (0);
	tab[j] = '\0';
	if (n == 0)
		tab[0] = 48;
	while (n > 0)
	{
		tab[j - 1] = (n % 10) + 48;
		n = n / 10;
		j--;
	}
	return (tab);
}

char		*ft_suitoa(unsigned short int n)
{
	unsigned short int	i;
	int					j;

	i = n;
	j = 0;
	if (i == 0)
		j++;
	while (i > 0)
	{
		i = i / 10;
		j++;
	}
	return (ft_suitoa_malloc(n, j));
}
