/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:03:02 by abiestro          #+#    #+#             */
/*   Updated: 2018/04/06 11:36:08 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while(*(unsigned char *)src != (unsigned char)c && n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	if (*(unsigned char *)src != (unsigned char)c)
		return (NULL);
	*(unsigned char *)dest = (unsigned char)c;
	dest++;
	return (dest);
}
