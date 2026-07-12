/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:39:01 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/05 15:48:15 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		x;
	char	*p;

	p = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (p == NULL)
		return (NULL);
	x = 0;
	while (src[x])
	{
		p[x] = src[x];
		x++;
	}
	p[x] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char	*original;
// 	char	*copy;

// 	original = "Hello, world!";
// 	copy = ft_strdup(original);
// 	printf("%s", original);
// 	printf("\n%s", copy);
// 	free(copy);
// 	return (0);
// }
