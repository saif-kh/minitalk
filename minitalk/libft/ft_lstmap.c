/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:46:09 by mel-khar          #+#    #+#             */
/*   Updated: 2021/11/14 02:13:25 by mel-khar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*l;

	l = 0;
	while (lst != NULL)
	{
		p = ft_lstnew(f(lst->content));
		if (!p)
		{
			ft_lstclear(&p, del);
			return (0);
		}
		else
			ft_lstadd_back(&l, p);
		lst = lst->next;
	}
	return (l);
}
