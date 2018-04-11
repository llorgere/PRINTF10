/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_space0.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:25:13 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:25:14 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_add_space0(char *str, t_flag flag, int len)
{
	if (flag.width > len && str[0] != '-')
	{
		str[0] = ' ';
		return (str);
	}
	else
		return (ft_add_space(str, len));
}
