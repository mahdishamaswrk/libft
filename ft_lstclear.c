/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:31:29 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/12 15:51:54 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}
