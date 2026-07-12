/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:16:52 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 17:30:39 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*tab_src;
	unsigned char		*tab2;

	i = 0;
	tab2 = (unsigned char *)dest;
	tab_src = (const unsigned char *)src;
	while (i < n)
	{
		tab2[i] = tab_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	void	*s;
// 	void	*s2;

// 	s = malloc(4);
// 	s2 = malloc(4);
// 	s2 = memcpy(s2, "abc", 3);
// 	s = ft_memcpy(s, s2, 2);
// 	printf("%s\n\n", (char *)s);
// 	memset(s, 0, 4);
// 	memcpy(s, s2, 2);
// 	printf("%s\n", (char *)s);
// 	free(s);
// 	free(s2);
// }
