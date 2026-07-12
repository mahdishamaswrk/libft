/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:35:12 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/12 19:38:48 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen (s);
	if (start >= s_len)
		return (ft_strdup (""));
	if (len > s_len - start)
		len = s_len - start;
	tab = malloc(len + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

// int	main(void)
// {
// 	const char	*str;
// 	char		*sub;

// 	str = "Hello my name is mahdi";
// 	sub = ft_substr(str, 7, 9);
// 	printf("%s\n", str);
// 	printf("%s\n", sub);
// 	free(sub);
// 	return (0);
// }
