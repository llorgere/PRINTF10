/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_adjust.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 00:35:13 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 01:26:46 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

t_flag	ft_flag_adjust(t_flag flag)
{
	if(flag.conv_num == 41)
		flag.preci = -1;
	if (flag.zero == 1 && flag.minus == 1)
		flag.zero = 0;
	if (flag.zero == 1 && flag.preci >= 0  && ((flag.conv_num >= 1 &&
			flag.conv_num <= 5) || (flag.conv_num >= 9 &&
			flag.conv_num <= 13) ||(flag.conv_num >= 16 &&
			flag.conv_num <= 40)))
		flag.zero = 0;
	if (flag.space == 1 && flag.plus == 1)
		flag.space = 0;
	if (flag.dies == 1 && ((flag.conv_num <= 2) ||
			(flag.conv_num <= 10 && flag.conv_num >= 6) ||
			(flag.conv_num <= 17 && flag.conv_num >= 14) ||
			(flag.conv_num <= 22 && flag.conv_num >= 21) ||
			(flag.conv_num <= 27 && flag.conv_num >= 26) ||
			(flag.conv_num <= 32 && flag.conv_num >= 31) ||
			(flag.conv_num <= 37 && flag.conv_num >= 36) ||
			(flag.conv_num >= 41)))
		flag.dies = 0;
	if (flag.plus == 1 && ((flag.conv_num >= 2 && flag.conv_num <= 8) ||
			(flag.conv_num >= 10 && flag.conv_num <= 15) ||
			(flag.conv_num >= 17 && flag.conv_num <= 20) ||
			(flag.conv_num >= 22 && flag.conv_num <= 25) ||
			(flag.conv_num >= 27 && flag.conv_num <= 30) ||
			(flag.conv_num >= 32 && flag.conv_num <= 35) ||
			(flag.conv_num >= 37 && flag.conv_num <= 41)))
		flag.plus = 0;
	if (flag.space == 1 && (flag.conv_num == 0 ||
			(flag.conv_num >= 2 && flag.conv_num <= 8) ||
			(flag.conv_num >= 10 && flag.conv_num <= 15) ||
			(flag.conv_num >= 17 && flag.conv_num <= 20) ||
			(flag.conv_num >= 22 && flag.conv_num <= 25) ||
			(flag.conv_num >= 27 && flag.conv_num <= 30) ||
			(flag.conv_num >= 32 && flag.conv_num <= 35) ||
			(flag.conv_num >= 37 && flag.conv_num <= 41)))
		flag.space = 0;
	if (flag.preci >= 0 && (flag.conv_num == 6 || flag.conv_num == 14))
		flag.preci = -1;
	return (flag);
}
