/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:21:21 by upierre-          #+#    #+#             */
/*   Updated: 2015/12/15 19:11:11 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	catmax;
	size_t	res;

	catmax = size - ft_strlen(dst) - 1;
	res = ft_strlen(src);
	if (ft_strlen(dst) > size)
		res += size;
	else
		res += ft_strlen(dst);
	if ((int)catmax > 0)
		ft_strncat(dst, src, catmax);
	return (res);
}
