/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wii_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 05:32:01 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 05:39:44 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_wii	ft_wii_init(int sizetab)
{
	t_wii	wiit;

	wiit.nb_conv = 0;
	wiit.pos_conv = malloc(sizeof(int) * (sizetab + 1));
	wiit.pos_conv[sizetab] = -1;
	wiit.tab = malloc(sizeof(char *) * (sizetab + 1));
	wiit.tab[sizetab] = NULL;
	return (wiit);
}
