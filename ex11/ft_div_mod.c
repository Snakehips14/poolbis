#include <stdlib.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int div;
	int mod;
	int a = 15;
	int b = 7;

	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d", div);
	printf("\n");
	printf("mod: %d", mod);
	printf("\n");
	return (0);
}
