/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:18:34 by smadesi           #+#    #+#             */
/*   Updated: 2019/06/20 16:44:03 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *t_s;
	unsigned char *t_d;
	size_t i;

	i = 0;
	t_s = (unsigned char *)src;
	t_d = (unsigned char *)dst;
	while (i < n)
	{
		t_d[i] = t_s[i];
		if (t_s[i] == (unsigned const char)c)
			return (t_d + i + 1);
		i++;
	}
	return (NULL);
}
