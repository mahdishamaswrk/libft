/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:21:45 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 17:59:47 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	char	str[] = "Hello World!";
// 	int		i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		putchar(ft_toupper(str[i]));
// 		i++;
// 	}
// 	putchar('\n');
// 	return (0);
// }
