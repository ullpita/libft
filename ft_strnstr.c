/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 13:54:19 by upierre-          #+#    #+#             */
/*   Updated: 2015/12/15 20:29:54 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0' && (n - i) - j > 0)
		{
			if (s1[i + j] == '\0')
				return (NULL);
			else
			{
				j++;
			}
		}
		if (s2[j] == '\0' && n > 0)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
