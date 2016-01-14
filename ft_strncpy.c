/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:50:43 by upierre-          #+#    #+#             */
/*   Updated: 2015/12/17 16:59:49 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*tmpdst;

	tmpdst = dst;
	while (n && *src)
	{
		*tmpdst = *src;
		tmpdst++;
		src++;
		n--;
	}
	while (n)
	{
		*tmpdst = '\0';
		tmpdst++;
		n--;
	}
	return (dst);
}
