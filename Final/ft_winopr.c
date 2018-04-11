/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_winopr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:43:12 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 08:43:20 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_winopr(char *str, t_flag flag, int len)
{
	char	*tab;

	if (flag.width <= len)
		return (ft_nowinopr(str, flag, len));
	else
	{
		if (flag.minus == 1)
		{
			tab = ft_addwf(str, flag, len);
			return (ft_addwmin(tab, flag, ft_strlen(tab)));
		}
		else if (flag.zero == 1)
		{
			if (flag.conv_num == 8)
				return (ft_addwp(str, flag, len));
			tab = ft_addw0(str, flag, len);
			return (ft_addwf0(tab, flag, len));
		}
		else
		{
			tab = ft_addwf(str, flag, len);
			return (ft_addw(tab, flag, ft_strlen(tab)));
		}
	}
}
