/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:39:25 by upierre-          #+#    #+#             */
/*   Updated: 2015/12/15 20:29:30 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;

	n = ft_strlen(s);
	while (n)
	{
		if (s[n] == (char)c)
			return ((char *)s + n);
		else
			n--;
	}
	if (n == 0 && s[n] != (char)c)
		return (NULL);
	return ((char *)s);
}
