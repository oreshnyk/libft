/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <oreshetn@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:00:18 by oreshetn          #+#    #+#             */
/*   Updated: 2023/07/27 16:32:17 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lsapply(t_list *l, void *(*f)(void *), void (*d)(void *))
{
	t_list	*s;

	if (!l)
		return (NULL);
	s = ft_lstnew(f(l->content));
	if (!s)
	{
		ft_lstclear(&s, d);
		return (NULL);
	}
	s->next = ft_lsapply(l->next, f, d);
	return (s);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;

	start = NULL;
	start = ft_lsapply(lst, f, del);
	return (start);
}
