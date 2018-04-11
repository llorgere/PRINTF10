/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_use.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 07:12:11 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:22:02 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_flag_use(char *str, t_flag flag)
{
	int		len;

	len = ft_strlen(str);
	flag = ft_flag_adjust(flag);
	if (flag.width <= 0 && flag.preci < 0)
		return (ft_nowinopr(str, flag, len));
	else if (flag.width <= 0 && flag.preci >= 0)
		return (ft_nowipr(str, flag, len));
	else if (flag.width > 0 && flag.preci < 0)
		return (ft_winopr(str, flag, len));
	else
		return (ft_wipr(str, flag, len));
}
