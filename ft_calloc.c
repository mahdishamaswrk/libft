/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:24:20 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/05 16:38:28 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_s;
	void	*tmp;

	if (size != 0 && nmemb > 18446744073709551615UL / size)
		return (NULL);
	total_s = nmemb * size;
	tmp = malloc(total_s);
	if (!tmp)
		return (NULL);
	memset(tmp, 0, total_s);
	return (tmp);
}

// int	main(void)
// {
// 	int		*arr;
// 	size_t	n;
// 	size_t	i;

// 	n = 5;
// 	arr = (int *)ft_calloc(n, sizeof(int));
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf(" %d", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }
