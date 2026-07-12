/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:44:27 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/12 15:34:37 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*lst2;
	t_list	*tmp;

	cur = lst;
	lst2 = NULL;
	while (cur)
	{
		tmp = ft_lstnew(f(cur->content));
		if (!tmp)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, tmp);
		cur = cur->next;
	}
	return (lst2);
}
