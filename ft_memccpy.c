/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 19:20:43 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/07 14:47:57 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int					i;
	unsigned char		*tmpdst;
	unsigned char		*tmpsrc;

	i = 0;
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	while (n > 0)
	{
		*tmpdst = *tmpsrc;
		if ((unsigned char)c == *tmpsrc)
			return (tmpdst + 1);
		tmpsrc++;
		tmpdst++;
		n--;
	}
	return (NULL);
}
