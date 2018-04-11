/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_seventh.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 06:39:58 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 06:40:17 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flag	ft_arg_seventh(t_flag flag, t_int2 *a, char *tab)
{
	a->count++;
	a->tmp = a->i;
	while (tab[a->i] != '\0')
		a->i++;
	if (a->tmp != a->i)
	{
		flag.tab = ft_strndup(tab + a->tmp + 1, a->i - a->tmp + 1);
		flag.c = tab[a->tmp];
	}
	flag.conv_num = -1;
	a->tmp = a->count--;
	return (flag);
}
