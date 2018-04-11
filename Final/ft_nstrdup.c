/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 02:16:07 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 02:16:22 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_nstrdup(const char *s, size_t n)
{
	size_t	i;
	char	*moc;

	i = 0;
	moc = (char*)malloc(sizeof(*moc) * (n + 1));
	if (!moc)
		return (NULL);
	while (i < n)
	{
		moc[i] = s[i];
		i++;
	}
	moc[i] = '\0';
	return (moc);
}
