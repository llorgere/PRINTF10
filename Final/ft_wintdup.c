/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:00:27 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 02:35:23 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_wintdup(wint_t s, t_flag *flag)
{
	char	*moc;

	if (s > 127)
	{
		flag->w = 0;
		return (ft_uniconv(ft_uitoa_bin(s)));
	}
	moc = (char*)malloc(sizeof(wchar_t) * (2));
	if (!moc)
		return (NULL);
	moc[0] = s;
	moc[1] = '\0';
	return (moc);
}
