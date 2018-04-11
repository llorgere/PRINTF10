/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_second.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 06:32:19 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 06:32:21 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flag	ft_arg_second(t_flag flag, t_int2 *a, char *tab)
{
	if ((a->count == a->tmp) && tab[a->i] == 'h' && flag.h < 2)
	{
		flag.h++;
		a->i++;
		a->count++;
	}
	if ((a->count == a->tmp) && tab[a->i] == 'j' && flag.j == 0)
	{
		flag.j++;
		a->i++;
		a->count++;
	}
	if ((a->count == a->tmp) && tab[a->i] == 'z' && flag.z == 0)
	{
		flag.z++;
		a->i++;
		a->count++;
	}
	return (flag);
}
