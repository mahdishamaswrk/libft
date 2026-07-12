/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:27:35 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 18:00:21 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	char	str[] = "HELLo WOrlD!";
// 	int		i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		putchar(ft_tolower(str[i]));
// 		i++;
// 	}
// 	putchar('\n');
// 	return (0);
// }
