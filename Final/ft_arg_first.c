/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 06:30:13 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 06:31:00 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flag	ft_arg_first(t_flag flag, t_int2 *a, char *tab)
{
	if ((a->count == a->tmp) && tab[a->i] == '-' && flag.minus == 0 &&
		flag.width < 0 && flag.preci < 0)
	{
		flag.minus++;
		a->i++;
		a->count++;
	}
	if ((a->count == a->tmp) && tab[a->i] == '+' && flag.plus == 0)
	{
		flag.plus++;
		a->i++;
		a->count++;
	}
	if ((a->count == a->tmp) && tab[a->i] == 'l' && flag.l < 2)
	{
		flag.l++;
		a->i++;
		a->count++;
	}
	return (flag);
}
