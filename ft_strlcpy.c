/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:34:33 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/12 15:10:07 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	*src;
// 	char	*dst;

// 	dst = malloc (10);
// 	src = malloc (10);
// 	strcpy(src, "hello");
// 	strcpy(dst, "");
// 	printf("%ld", ft_strlcpy(dst, src, 5));
// 	printf("\n%s", dst);
// }
