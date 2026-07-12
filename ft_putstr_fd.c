/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:27:20 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/04 19:46:33 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	void	*s;

// 	s = malloc(4);
// 	s = memcpy(s, "abc", 3);
// 	ft_putstr_fd(s, 1);
// 	free(s);
// }
