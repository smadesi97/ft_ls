/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                    +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 11:59:03 by smadesi          #+#    #+#              */
/*   Updated: 2020/07/22 01:12:05 by smadesi         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
** random function using memory address instead of the usual timestamp
*/

#include "../includes/libft.h"

int ft_rand(int min, int max)
{
	int n;
	int rng;

	n = (long)malloc(sizeof(long)) >> 1;
	n = (n < 0) ? -n : n;
	rng = 0;
	while (n >= 10)
	{
		rng += (n % 10);
		n /= 10;
	}
	rng = (rng % (max - min + 1)) + min;
	return (rng);
}
