/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:28:54 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/12 15:06:26 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;
	int				i;

	chr = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)(s + i));
		i ++;
	}
	if (s[i] == chr)
		return ((char *)(s + i));
	return (NULL);
}

// int	main(void)
// {
// 	const char	*str;
// 	char		*result;
// 	int			ch;

// 	str = "Hello, world!";
// 	result = ft_strchr(str, 'o');
// 	printf("%s", result);
// 	return (0);
// }
