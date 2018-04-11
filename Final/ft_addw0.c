/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addw0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:49:49 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 08:49:51 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_addw0(char *str, t_flag flag, int len)
{
	int		i;
	char	*tab;

	i = 0;
	if (!(tab = malloc(sizeof(char) * flag.width + 1)))
		return (NULL);
	tab[flag.width] = '\0';
	if (str[0] == '-' && (flag.conv_num == 1 || flag.conv_num == 9 ||
				flag.conv_num == 16 || flag.conv_num == 21 ||
				flag.conv_num == 26 || flag.conv_num == 31 ||
				flag.conv_num == 36))
	{
		tab[i] = '-';
		i++;
		str[0] = '0';
	}
	while (i < (flag.width - len))
		tab[i] = ft_fill(tab, &i, '0');
	while (i < flag.width)
		tab[i] = ft_fill(tab, &i, '\0');
	tab = ft_strcat(tab, str);
	free(str);
	return (tab);
}
