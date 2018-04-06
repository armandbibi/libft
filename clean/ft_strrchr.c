/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:36:31 by abiestro          #+#    #+#             */
/*   Updated: 2018/04/05 17:22:06 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int d)
{
	char *s;
	char c;

	c = (char)d;
	s = NULL;
	while (*str)
	{
		if (*str == c)
			s = (char *)str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (s);
}
