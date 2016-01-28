/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 18:42:11 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/28 15:59:08 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*listnew;

	if (!(listnew = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		listnew->content = NULL;
		listnew->content_size = 0;
	}
	else
	{
		if (!(listnew->content = (t_list*)malloc(content_size)))
			return (NULL);
		ft_memmove(listnew->content, content, content_size);
		listnew->content_size = content_size;
	}
	return (listnew);
}
