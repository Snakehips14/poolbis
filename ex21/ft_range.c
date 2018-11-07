#include <stdlib.h>

int	*ft_range(int min, int max)
{
	if (min >= max)
		return (NULL);
	int i;
	int *tab;

	i = max - min;
	tab = (int*)malloc(sizeof(int) * i);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}


