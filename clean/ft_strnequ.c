/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 20:16:17 by abiestro          #+#    #+#             */
/*   Updated: 2018/04/05 13:30:33 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *str1, char const *str2, size_t n)
{
	while (*str1 && *str1 == *str2 && n--)
	{
		str1++;
		str2++;
	}
	if (!*str1 && !*str2)
		return (1);
	return (0);
}
