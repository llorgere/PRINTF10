/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndups.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 02:10:29 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 02:11:40 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strndups(const unsigned char *s, size_t n)
{
	size_t	j;
	char	*moc;

	j = 0;
	moc = (char*)malloc(sizeof(*moc) * (n + 1));
	if (!moc)
		return (NULL);
	while (j < n)
	{
		if ((unsigned int)s[j] >= 192 && ((j + 1) >= n))
			break ;
		else if ((unsigned int)s[j] > 224 && ((j + 2) >= n))
			break ;
		else if ((unsigned int)s[j] > 240 && ((j + 3) >= n))
			break ;
		moc[j] = s[j];
		j++;
	}
	while (j <= n)
	{
		moc[j] = '\0';
		j++;
	}
	return (moc);
}
