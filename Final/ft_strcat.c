/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:32:06 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 01:54:44 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		lend;
	int		lens;

	i = 0;
	lend = 0;
	lens = 0;
	lend = ft_strlen(dest);
	while (src[lens] != '\0')
		lens++;
	while (i <= lens)
	{
		dest[lend + i] = src[i];
		i++;
	}
	return (dest);
}
