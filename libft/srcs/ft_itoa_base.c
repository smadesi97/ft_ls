/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                    +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:03:54 by smadesi          #+#    #+#              */
/*   Updated: 2020/07/22 01:12:05 by smadesi         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_itoa_base(int value, int b)
{
	char *s;
	long n;
	int i;

	n = (value < 0) ? -(long)value : value;
	i = (value < 0) ? 2 : 1;
	while ((n /= b) >= 1)
		++i;
	if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	(value < 0) ? s[0] = '-' : 0;
	n = (value < 0) ? -(long)value : value;
	while (i--)
	{
		s[i] = (n % b < 10) ? n % b + '0' : n % b + 'A' - 10;
		n /= b;
	}
	return (s);
}
