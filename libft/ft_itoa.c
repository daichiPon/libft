#include <stdlib.h>

int	ft_digit(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 1;
	if (nb < 0)
		nb *= -1;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		digit;
	int		sign;
	char	*str;

	nb = n;
	sign = 0;
	if (nb < 0 && ++sign)
		nb *= -1;
	digit = ft_digit(n);
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
