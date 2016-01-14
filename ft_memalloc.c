/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 15:32:21 by upierre-          #+#    #+#             */
/*   Updated: 2015/12/09 13:11:33 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*res;
	int		i;

	if (!(res = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (size > 0)
	{
		res[i] = 0;
		i++;
		size--;
	}
	return (res);
}
