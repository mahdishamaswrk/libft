/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:06:30 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/05 18:27:29 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contain(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	int				end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && contain(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1) -1;
	while (end >= 0 && contain(s1[end], set) == 1)
		end--;
	if (end < (int)start)
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, start, (size_t)(end - start + 1)));
}

// int	main(void)
// {
// 	char	*str;
// 	char	*set;
// 	char	*result;

// 	str = "   \t\nHello, World!  \n\n  ";
// 	set = " \n\t";
// 	result = ft_strtrim(str, set);
// 	printf("%s", str);
// 	printf("\n%s", result);
// 	free(result);
// }
