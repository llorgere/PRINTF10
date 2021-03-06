/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uniconv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 16:49:08 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/10 19:00:40 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	ft_atobin(const char *str, size_t i)
{
	int		nb;

	nb = 0;
//	printf("str est %s", str);
	while (*str <= '1' && *str >= '0' && i > 0)
	{
		nb = nb * 2;
		nb = nb + *str - '0';
		str++;
		i--;
	}
//	printf("nb est %d\n", nb);
	return (nb);
}

static char	*ft_4bytes(char *bin, size_t i)
{
	char	*tab;

	if (!(tab = malloc(sizeof(unsigned char) * 5)))
		return (NULL);
	tab[0] = ft_atobin(bin, i - 18) + 240;
	tab[1] = ft_atobin(bin + i - 18, 6) + 128;
	tab[2] = ft_atobin(bin + i - 12, 6) + 128;
	tab[3] = ft_atobin(bin + i - 6, 6) + 128;
	tab[4] = '\0';
	free(bin);
	return (tab);
}

static char	*ft_3bytes(char *bin, size_t i)
{
	char	*tab;

	if (!(tab = malloc(sizeof(unsigned char) * 4)))
		return (NULL);
	tab[0] = ft_atobin(bin, i - 12) + 224;
	tab[1] = ft_atobin(bin + i - 12, 6) + 128;
	tab[2] = ft_atobin(bin + i - 6 , 6) + 128;
	tab[3] = '\0';
	free(bin);
	return (tab);
}

static char	*ft_2bytes(char *bin, size_t i)
{
	char	*tab;

	if (!(tab = malloc(sizeof(unsigned char) * 3)))
		return (NULL);
	tab[0] = ft_atobin(bin, i - 6) + 192;
	tab[1] = ft_atobin(bin + i - 6, 6) + 128;
	tab[2] = '\0';
	free(bin);
	return (tab);
}

char			*ft_uniconv(char *bin)
{
	size_t	i;

	i = 0;
	i = ft_strlen(bin);
//	printf("len est %zd\n", i);
	if (i >= 8 && i <= 11)
		return (ft_2bytes(bin, i));
	else if (i >= 12 && i <= 16)
		return (ft_3bytes(bin, i));
	else if (i >= 17 && i <= 21)
		return (ft_4bytes(bin, i));
	else
		return (NULL);
}
