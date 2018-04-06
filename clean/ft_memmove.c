/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:14:10 by abiestro          #+#    #+#             */
/*   Updated: 2018/04/06 11:34:14 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void *d;

	d = dest;
	if (src > d)
	{
		while (n--)
			*(unsigned char *)d++ = *(unsigned char *)src++;
	}
	else
	{
		d += n ;
		src += n ;
		while (n--)
			*(unsigned char *)--d = *(unsigned char *)--src;
	}
	return (dest);
}
