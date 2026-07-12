/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:47:07 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 17:53:38 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (size <= dlen)
		return (size + slen);
	while (src[i] && (dlen + i) < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

// int	main(void)
// {
// 	char	*src;
// 	char	*dst;
// 	size_t	result;

// 	dst = malloc(20);
// 	src = malloc(20);
// 	strcpy(src, "world");
// 	strcpy(dst, "hello");
// 	result = ft_strlcat(dst, src, 10);
// 	printf("%ld", result);
// 	printf("\n%s", dst);
// 	free(src);
// 	free(dst);
// }
