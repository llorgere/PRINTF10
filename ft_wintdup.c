/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:00:27 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/17 16:50:08 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_wintdup(wchar_t s, flag_type *flag)
{
	char	*moc;
	flag->W = -1;
	if (s > 127)
		return (ft_uniconv(ft_uitoa_bin(s)));
		//flag->W = 0;
	moc = (char*)malloc(sizeof(wchar_t) * (2));
	if (!moc)
		return (NULL);
	moc[0] = s;
	moc[1] = '\0';
	return (moc);
}
