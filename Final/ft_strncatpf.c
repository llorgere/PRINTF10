/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:32:06 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 01:58:24 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strncatpf(char *dest, const char *src, size_t lend, size_t lens)
{
	size_t		i;

	i = 0;
	while (i < lens)
	{
		dest[lend + i] = src[i];
		i++;
	}
	return (dest);
}
