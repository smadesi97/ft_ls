/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:30:48 by smadesi          #+#    #+#              */
/*   Updated: 2020/07/22 01:12:05 by smadesi         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(char c)
{
	if (!c)
		return (0);
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}
