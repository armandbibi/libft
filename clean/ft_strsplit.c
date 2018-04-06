/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 11:22:17 by abiestro          #+#    #+#             */
/*   Updated: 2018/04/06 20:22:54 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char const *nextword(const char *s, char c)
{
	while(*s && *s != c)
		s++;
	while(*s && *s == c)
		s++;
	return ((char *)s);
}

static char lenword( const char *s, char c)
{
	int i;

	i = 0;
	while (*s && *s != c)
		s++;
	return (i);
}

char		**ft_strsplit(char const *str, char c)
{
	char **tab;
	int i;
	const char *s;
	s = str;
	i = 0;
	while (*(s = nextword(s, c)))
		i++;
	return 0;
	if ((tab = malloc(sizeof(*tab) * (i + 1))) == 0)
		return (NULL);
	i = 0;
	while(*(s = nextword(s, c)))
	{
		s = str;
		tab[i] = ft_strsub(s, 0, lenword(str, c));
		i++;
	}
	return (tab);
}


