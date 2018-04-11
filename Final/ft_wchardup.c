/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:00:27 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 03:00:41 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_wchardup_null(void)
{
	char	*tab;

	if (!(tab = malloc(sizeof(char) * 7)))
		return (NULL);
	tab[0] = '(';
	tab[1] = 'n';
	tab[2] = 'u';
	tab[3] = 'l';
	tab[4] = 'l';
	tab[5] = ')';
	tab[6] = '\0';
	return (tab);
}

static char	*ft_above(char *moc, wchar_t *s, t_flag *flag, int *j)
{
	char	*tmp;
	char	*tmpm;

	if (!moc)
	{
		moc = ft_uniconv(ft_uitoa_bin(s[*j]));
	}
	else
	{
		tmp = ft_uniconv(ft_uitoa_bin(s[*j]));
		tmpm = ft_strjoin(moc, tmp);
		free(moc);
		moc = tmpm;
		flag->w = 0;
		free(tmp);
	}
	return (moc);
}

static char	*ft_below(char *moc, wchar_t *s, int *j)
{
	char	*tmp;
	char	*tmpe;

	if (!moc)
	{
		if (!(moc = malloc(sizeof(wint_t) * 2)))
			return (NULL);
		moc[0] = s[*j];
		moc[1] = '\0';
		j++;
	}
	else
	{
		if (!(tmpe = malloc(sizeof(wint_t) * 2)))
			return (NULL);
		tmpe[0] = s[*j];
		tmpe[1] = '\0';
		tmp = ft_strjoin(moc, tmpe);
		free(moc);
		moc = tmp;
		free(tmpe);
		j++;
	}
	return (moc);
}

char		*ft_wchardup(wchar_t *s, t_flag *flag)
{
	int		i;
	int		j;
	char	*moc;

	moc = NULL;
	if (s == NULL)
		return (ft_wchardup_null());
	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	while (j < i)
	{
		if (s[j] > 127)
		{
			moc = ft_above(moc, s, flag, &j);
			j++;
		}
		else
		{
			moc = ft_below(moc, s, &j);
			j++;
		}
	}
	return (moc);
}
