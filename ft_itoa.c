#include "libft.h"

int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		dig;
	int		sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	len = ft_count_digits(n);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		dig = n % 10 * sign;
		str[len - 1] = dig + '0';
		n /= 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
