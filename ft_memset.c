/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:02:37 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/02 13:48:53 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void
// {
// 	void	*s;

// 	s = malloc(4);
// 	printf("%s\n\n", (unsigned char *)memset(s, 38, 40));
// 	printf("%s\n\n", (unsigned char *)ft_memset(s, 38, 40));
// }
