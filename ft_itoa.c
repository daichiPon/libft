/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:52:11 by username          #+#    #+#             */
/*   Updated: 2026/05/13 00:01:48 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		digit;
	int		sign;
	char	*str;

	nb = (long)n;
	sign = 0;
	if (nb < 0 && ++sign)
		nb *= -1;
	digit = ft_len(nb);
	str = malloc(sizeof(char) * (digit + sign + 1));
	if (!str)
		return (NULL);
	str[digit + sign] = '\0';
	while (digit--)
	{
		str[digit + sign] = (nb % 10) + '0';
		nb /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(0));
// }
