/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:19:22 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/12 14:12:04 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = count(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb)
	{
		str[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(1234));
// 	printf("%s\n", ft_itoa(-9876));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-2147483648));
// }
