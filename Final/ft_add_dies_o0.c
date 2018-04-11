/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_dies_o0.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:02:55 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:02:56 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_add_dies_o0(char *str, t_flag flag, int len)
{
	if (flag.width > len)
	{
		str[0] = '0';
		return (str);
	}
	else
		return (ft_add_dies_o(str, len));
}
