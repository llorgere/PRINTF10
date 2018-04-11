/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 01:58:48 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 02:08:48 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_moc_init(char *moc, size_t n)
{
	moc = (char*)malloc(sizeof(*moc) * (n + 1));
	if (!moc)
		return (NULL);
	return (moc);
}

char		*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	size_t	j;
	char	*moc;

	moc = NULL;
	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	if (i < n)
		moc = ft_moc_init(moc, n);
	else
		moc = ft_moc_init(moc, i);
	if (!moc)
		return (NULL);
	while (j < i && j < n)
	{
		moc[j] = s[j];
		j++;
	}
	moc[j] = '\0';
	return (moc);
}
