/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_third.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 06:33:35 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 06:33:55 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flag	ft_arg_third(t_flag flag, t_int2 *a, char *tab)
{
	if ((a->count == a->tmp) && tab[a->i] == ' ' && flag.space == 0 &&
			flag.width < 0 && flag.preci < 0)
	{
		flag.space++;
		a->i++;
		a->count++;
	}
	if ((a->count == a->tmp) && tab[a->i] == '0' && flag.zero == 0 &&
			flag.width < 0 && flag.preci < 0)
	{
		flag.zero++;
		a->i++;
		a->count++;
	}
	if ((a->count == a->tmp) && tab[a->i] == '#' && flag.dies == 0)
	{
		flag.dies++;
		a->i++;
		a->count++;
	}
	return (flag);
}
