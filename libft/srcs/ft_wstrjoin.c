/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>          			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 11:06:35 by smadesi          #+#    #+#              */
/*   Updated: 2020/07/22 01:12:05 by smadesi         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

wchar_t *ft_wstrjoin(wchar_t *s1, wchar_t *s2)
{
	wchar_t *s;
	int i;

	if (!(s = (wchar_t *)malloc(sizeof(wchar_t) *
								(1 + ft_wstrlen((unsigned *)s1) + ft_wstrlen((unsigned *)s2)))))
		return (NULL);
	i = 0;
	while (*s1)
		s[i++] = *s1++;
	while (*s2)
		s[i++] = *s2++;
	s[i] = '\0';
	return (s);
}
