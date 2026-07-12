/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:02:58 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 18:07:52 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	int		result;

// 	str1 = "Hello, world!";
// 	str2 = "Hello, there!";
// 	result = ft_strncmp(str1, str2, 8);
// 	printf("%d\n", result);
// 	return (0);
// }
