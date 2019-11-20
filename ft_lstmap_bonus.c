/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 19:06:40 by jchene            #+#    #+#             */
/*   Updated: 2019/11/20 21:24:00 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newelem;

	if (!lst)
		return (NULL);
	if (!f(lst->content))
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	newlst->next = NULL;
	if (!lst->next)
		return (newlst);
	lst = lst->next;
	while (lst)
	{
		if (!f(lst->content))
		{
			ft_lstclear(&newlst, *del);
			return (NULL);
		}
		newelem = ft_lstnew(f(lst->content));
		ft_lstadd_back(&newlst, newelem);
		lst = lst->next;
	}
	return (newlst);
}
