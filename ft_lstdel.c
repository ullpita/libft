/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 16:16:31 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/08 16:50:12 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmplst;

	tmplst = *alst;
	while (tmplst)
	{
		del(tmplst->content, tmplst->content_size);
		free(tmplst);
		tmplst = tmplst->next;
	}
	*alst = NULL;
}
