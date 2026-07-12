/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:10:33 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 18:12:38 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tab;
	size_t			i;
	unsigned char	c1;

	tab = (unsigned char *) s;
	c1 = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (tab[i] == c1)
			return ((void *) &tab[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "adcdef";
// 	char	*result;

// 	result = ft_memchr(str, 'd', 6);
// 	printf("%s", result);
// 	return (0);
// }
