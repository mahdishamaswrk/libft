/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:09:07 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 18:15:54 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tab1;
	unsigned char	*tab2;

	tab1 = (unsigned char *) s1;
	tab2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (tab1[i] != tab2[i])
			return (tab1[i] - tab2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "abcdef";
// 	char	str2[] = "abcdez";
// 	int		result;

// 	result = ft_memcmp(str1, str2, 4);
// 	printf("%d\n", result);
// 	return (0);
// }
