/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:00:27 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/10 19:15:11 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_wintdup(wint_t s, flag_type *flag)
{
	char	*moc;
//	flag->W = -1;
	if (s > 127)
	{
		flag->W = 0;
		return (ft_uniconv(ft_uitoa_bin(s)));
	}
	moc = (char*)malloc(sizeof(wchar_t) * (2));
	if (!moc)
		return (NULL);
	moc[0] = s;
	moc[1] = '\0';
	return (moc);
}
