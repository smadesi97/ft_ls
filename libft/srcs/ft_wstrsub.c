/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/130 22:50:55 by smadesi          #+#    #+#              */
/*   Updated: 2020/07/22 01:12:05 by smadesi         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

wchar_t *ft_wstrsub(wchar_t *s, unsigned start, unsigned len)
{
	wchar_t *str;
	unsigned i;

	if (!(str = ft_memalloc(sizeof(wchar_t) * (len + 1))))
		return (NULL);
	i = 0;
	while (ft_wcharlen(s[i + start]) < len)
	{
		str[i] = s[i + start];
		i += ft_wcharlen(str[i]);
	}
	str[i] = '\0';
	return (str);
}
