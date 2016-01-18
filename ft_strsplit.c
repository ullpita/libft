/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:11:25 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/18 12:50:23 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_countword(char const *s, char c)
{
	size_t			count;
	size_t			i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			i++;
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char			*ft_word(size_t size, char const *s)
{
	char			*res;

	res = ft_strnew(size);
	res = ft_strncpy(res, s, size);
	return (res);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t			count;
	size_t			i;
	char			**res;

	if (!(res = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1))))
		return (NULL);
	res[0] = 0;
	if (ft_countword(s, c) == 0)
		return (res);
	i = 0;
	while (i <= ft_countword(s, c))
	{
		while (*s == c)
			s++;
		count = 0;
		if (*s != c)
		{
			count = ft_strlenc(s, c);
			res[i] = ft_word(count, s);
			s += count;
		}
		i++;
	}
	res[i] = 0;
	return (res);
}
