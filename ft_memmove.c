/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:16:51 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 17:46:17 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*tmp_src;
	unsigned char		*tmp_dest;

	if (!src && !dest)
		return (dest);
	tmp_src = (const unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	if (tmp_dest > tmp_src)
	{
		while (n > 0)
		{
			n--;
			tmp_dest[n] = tmp_src[n];
		}
	}
	else
		dest = ft_memcpy(tmp_dest, tmp_src, n);
	return (dest);
}

// int	main(void)
// {
// 	char	*data;

// 	data = malloc (10);
// 	strcpy(data, "123456789");
// 	ft_memmove(data + 2, data, 5);
// 	printf("%s\n", data);
// 	free (data);
// }
