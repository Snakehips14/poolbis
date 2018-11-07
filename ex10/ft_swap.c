#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(void)
{
	int a = 4;
	int b = 2;

	printf("a before : " "%d\n", a);
	printf("b before : " "%d\n", b);
	ft_swap(&a, &b);
	printf("a after swap : " "%d\n", a);
	printf("b after swap : " "%d\n", b);
	return (0);
}
