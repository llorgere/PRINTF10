/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:00:27 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 01:31:35 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_wchardup_null()
{
	char	*tab;

	if(!(tab = malloc(sizeof(char)* 7)))
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
/*
   static char	*ft_special_uni(wchar_t *s, char *moc, int *i, int *j)
   {
   char	*tmp;
   char	*tmpm;
   int		len;
   int		lend;

   lend = 0;
   len = 0;
   printf("rentre dans uni\n");
   tmp = ft_uniconv(ft_uitoa_bin(s[*j]));
   lend = (ft_strlen(tmp) + *i);
   if(!(tmpm = malloc(sizeof(wint_t) * lend)))
   return (NULL);
   while (len < *j )
   {
   tmpm[len] = moc[len];
   len++;
   }
   printf("1 dans uni\n");
 *j = *j + ft_strlen(tmp);
 while (len < *j)
 {
 tmpm[len] = *tmp;
 len++;
 }
 printf("2 dans uni tmpm est %s\n", tmpm);
 *i = lend;
 free(tmp);
 return (tmpm);
 }
 static char	*

*/
char	*ft_wchardup(wchar_t *s, t_flag *flag)
{
	int		i;
	int		j;
	char	*moc;
	char	*tmp;
	char	*tmpm;
	char	*tmpe;

	moc = NULL;
	if (s == NULL)
		return (ft_wchardup_null());
	i = 0;
	j = 0;
	//	printf("wchardup 1 flag.w est [%d]\n", flag->W);
	while (s[i] != '\0')
		i++;
	//if(!(moc = (char*)malloc(sizeof(wint_t) * (i))))
	//	return (NULL);
	while (j < i)
	{
		if(s[j] > 127 /*&& flag->W == -1*/)
		{
			//tmp = moc;
			//tmp = ft_special_uni(s, moc, &i, &j);
			if (!moc)
			{
				moc = ft_uniconv(ft_uitoa_bin(s[j]));
				j++;
			}
			else
			{
				tmp = ft_uniconv(ft_uitoa_bin(s[j]));
				tmpm  = ft_strjoin(moc, tmp);
				free(moc);
				moc = tmpm;
				flag->w = 0;
				j++;
				free(tmp);
				//printf("j est %d et i est %d\n", j, i);
			}
		}
		else
		{
			if (!moc)
			{
				if(!(moc = malloc(sizeof(wint_t) * 2)))
					return (NULL);
				moc[0] = s[j];
				moc[1] = '\0';
				j++;
			}
			else
			{
				if(!(tmpe = malloc(sizeof(wint_t) * 2)))
					return (NULL);
				tmpe[0] = s[j];
				tmpe[1] = '\0';
				tmp = ft_strjoin(moc, tmpe);
				free(moc);
				moc = tmp;
				free(tmpe);
				j++;
			}
		}
	}
//	moc[j] = '\0';
	return (moc);
}
