#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	int res;

	res = nb;
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(1));
	return (0);
}
