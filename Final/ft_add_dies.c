/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_dies.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:53:06 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 08:53:10 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_add_dies(char *str, t_flag flag, int len)
{
	if (len == 0 && flag.preci == 0 && flag.conv_num != 3 &&
			flag.conv_num != 11 && flag.conv_num != 18 &&
			flag.conv_num != 23 && flag.conv_num != 28 &&
			flag.conv_num != 33 && flag.conv_num != 38)
		return (str);
	else if (flag.dies == 1 && ((str[0] != '0' && len == 1) ||
				(len > 1) || (len == 0)))
	{
		if (flag.conv_num == 3 || flag.conv_num == 11 ||
				flag.conv_num == 18 || flag.conv_num == 23 ||
				flag.conv_num == 28 || flag.conv_num == 33 ||
				flag.conv_num == 38)
			return (ft_add_dies_o(str, len));
		else if (flag.conv_num == 4 || flag.conv_num == 12 ||
				flag.conv_num == 19 || flag.conv_num == 24 ||
				flag.conv_num == 29 || flag.conv_num == 34 ||
				flag.conv_num == 39)
			return (ft_add_dies_x(str, len));
		else
			return (ft_add_dies_xup(str, len));
	}
	else
		return (str);
}
