/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_plus0.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:11:20 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:11:22 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_add_plus0(char *str, t_flag flag, int len)
{
	if (flag.width > len && str[0] != '-')
	{
		str[0] = '+';
		return (str);
	}
	else
		return (ft_add_plus(str, len));
}
