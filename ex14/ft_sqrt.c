#include <stdio.h>

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	int a;

	a = nb / 2;
	while (a * a != nb && a > 0)
		a--;
	if (a * a == nb)
		return (a);
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(-100000));
	return (0);
}
