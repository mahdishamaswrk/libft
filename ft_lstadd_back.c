/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:09:49 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/12 15:29:36 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	cur = *lst;
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = new;
}
