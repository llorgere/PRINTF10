/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:00:27 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/10 23:56:02 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strndups (const unsigned char *s, size_t n)
{
	//size_t	i;
	size_t	j;
	char	*moc;

	//printf("passe la\n");
	//i = 0;
	j = 0;
	/*
	while (s[i] != '\0')
		i++;
//	printf("i est %zu\n", i);
	*/
		moc = (char*)malloc(sizeof(*moc) * (n + 1));
		if (!moc)
			return (NULL);
	
		/*
	if (i < n)
	{
		moc = (char*)malloc(sizeof(*moc) * (n + 1));
		if (!moc)
			return (NULL);
	}
	else
	{
		moc = (char*)malloc(sizeof(*moc) * (i + 1));
		if (!moc)
			return (NULL);
	}
	*/
	/*
	while (j < i && j < n)
	{
	//	printf("%d\n", s[j]);
		if ((unsigned int)s[j] >= 192 && ((j + 1) >= n || (j + 1) >= i))
			break;
		else if ((unsigned int)s[j] > 224 && ((j + 2) >= n || (j + 2) >= i))
			break;
		else if ((unsigned int)s[j] > 240 && ((j + 3) >= n || (j + 3) >= i))
			break;
//		printf("%d\n", s[j]);
		moc[j] = s[j];
		j++;
	}
*/
	
	while (j < n)
	{
	//	printf("%d\n", s[j]);
		if ((unsigned int)s[j] >= 192 && ((j + 1) >= n))
			break;
		else if ((unsigned int)s[j] > 224 && ((j + 2) >= n))
			break;
		else if ((unsigned int)s[j] > 240 && ((j + 3) >= n ))
			break;
//		printf("%d\n", s[j]);
		moc[j] = s[j];
		j++;
	}
	
	//printf("j est [%zu]\n", j);
//	while (j < i && j < n)
	while (j <= n)
	{
		moc[j] = '\0';
		j++;
	}
	//printf("j est %zu\n", j);
	return (moc);
}
