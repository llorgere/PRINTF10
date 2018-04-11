/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addwf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:45:30 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 08:45:36 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_addwf(char *str, t_flag flag, int len)
{
	if (flag.dies == 1)
		return (ft_add_dies(str, flag, len));
	else if (flag.plus == 1)
		return (ft_add_plus(str, len));
	else if (flag.space == 1)
		return (ft_add_space(str, len));
	else
		return (str);
}
