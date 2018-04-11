/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_total.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 06:50:42 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 06:53:57 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flag		ft_arg_total(t_flag flag, t_int2 *a, char *tab)
{
	flag = ft_arg_first(flag, a, tab);
	flag = ft_arg_second(flag, a, tab);
	flag = ft_arg_third(flag, a, tab);
	flag = ft_arg_fourth(flag, a, tab);
	flag = ft_arg_fifth(flag, a, tab);
	return (flag);
}
