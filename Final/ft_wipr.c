/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wipr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:37:47 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 08:37:50 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_wipr(char *str, t_flag flag, int len)
{
	char	*tmp;

	if (flag.width <= len && flag.conv_num != 7 && flag.conv_num != 15)
		return (ft_nowipr(str, flag, len));
	else
	{
		tmp = ft_nowipr(str, flag, len);
		flag.space = 0;
		flag.plus = 0;
		flag.dies = 0;
		return (ft_winopr(tmp, flag, ft_strlen(tmp)));
	}
}
