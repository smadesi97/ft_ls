/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:20:25 by smadesi           #+#    #+#             */
/*   Updated: 2019/06/18 11:38:00 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char *fresh;
	size_t i;

	i = 0;
	if (!s || !f)
		return (0);
	fresh = ft_strnew(ft_strlen((const char *)s));
	if (!fresh)
		return (0);
	while ((char)s[i])
	{
		fresh[i] = (*f)((char)s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
