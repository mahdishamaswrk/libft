/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:40:03 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 18:13:04 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen((char *)s);
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)(s + i));
	i--;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i --;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*str;
// 	char		*result;
// 	int			ch;

// 	str = "Hello, world!";
// 	result = ft_strrchr(str, 'o');
// 	printf("%s", result);
// 	return (0);
// }
