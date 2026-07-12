/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:15:10 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 18:28:38 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	z;

	if (!ft_strlen(little))
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = i;
		z = 0;
		while (j < len && big[j] == little[z] && little[z])
		{
			z++;
			j++;
		}
		if (z == ft_strlen(little))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*big;
// 	const char	*little;
// 	char		*result;

// 	big = "Hello, this is a simple test";
// 	little = "simple";
// 	result = ft_strnstr(big, little, 23);
// 	printf("%s\n", result);
// 	return (0);
// }
