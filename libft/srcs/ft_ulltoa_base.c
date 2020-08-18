/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>          			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:03:38 by smadesi          #+#    #+#              */
/*   Updated: 2020/07/22 01:12:05 by smadesi         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** the number is received as long long. If l was negative, casting n as
** unsigned int will overflow it to positive value.
** if the number was negative it will take base 10.
** lowUP is to tell if it should be uppercase (1) or lowercase (0) if b > 10
*/

char *ft_ulltoa_base(unsigned long long n, int b, int lowup)
{
	char *s;
	unsigned long long tmp;
	int length;

	lowup = (lowup) ? 'A' - 10 : 'a' - 10;
	length = 1;
	tmp = n;
	while (tmp /= b)
		++length;
	if (!(s = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	s[length] = '\0';
	while (length--)
	{
		s[length] = (n % b < 10) ? n % b + '0' : n % b + lowup;
		n /= b;
	}
	return (s);
}
