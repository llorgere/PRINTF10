/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addwf0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:46:35 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 08:46:46 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_addwf0(char *str, t_flag flag, int len)
{
	if (flag.dies == 1)
		return (ft_add_dies0(str, flag, len));
	if (flag.plus == 1)
		return (ft_add_plus0(str, flag, len));
	else if (flag.space == 1)
		return (ft_add_space0(str, flag, len));
	else
		return (str);
}
