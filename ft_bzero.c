/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:28:57 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 17:23:35 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	*s;
// 	int		i;

// 	s = malloc(5);
// 	strcpy(s, "abcd");
// 	ft_bzero(s, 3);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		if (s[i] == '\0')
// 			printf("%c", '$');
// 		i++;
// 	}
// 	printf("\n");
// 	strcpy(s, "abcd");
// 	bzero(s, 3);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		if (s[i] == '\0')
// 			printf("%c", '$');
// 		i++;
// 	}
// 	printf("\n");
// 	free(s);
// }
