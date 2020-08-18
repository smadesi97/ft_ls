/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:51:03 by smadesi           #+#    #+#             */
/*   Updated: 2019/06/06 16:51:59 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	char *s;

	s = (char *)s2;
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while ((j < n) && s[j])
	{
		s1[i] = s[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
