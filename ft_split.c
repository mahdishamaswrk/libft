/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:28:26 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/05 19:18:32 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordnb(char const *s, char c)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			nb++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nb);
}

size_t	ft_wordlen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;
	int		j;
	int		z;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (wordnb(s, c) + 1));
	z = 0;
	i = 0;
	while (s[z])
	{	
		if (s[z] != c)
		{
			tab[i] = malloc(ft_wordlen(s + z, c) + 1);
			j = 0;
			while (s[z] != c && s[z])
				tab[i][j++] = s[z++];
			tab[i++][j] = '\0';
		}
		else
			z++;
	}
	tab[i] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	result = ft_split("  Hello world iam    split ", ' ');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result[%d] = '%s'\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
