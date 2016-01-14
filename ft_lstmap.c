/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:34:04 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/09 19:49:20 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*listnewf;
	t_list	*tmp;
	t_list	*lstf;

	lstf = f(lst);
	if ((listnewf = ft_lstnew(lstf->content, lstf->content_size)))
	{
		tmp = listnewf;
		lst = lst->next;
		while (lst)
		{
			lstf = f(lst);
			if (!(tmp->next = ft_lstnew(lstf->content, lstf->content_size)))
				return (NULL);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (listnewf);
}
