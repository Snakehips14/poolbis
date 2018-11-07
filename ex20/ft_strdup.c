#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char 	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = ft_strlen(src);
	dest = (char*)malloc(sizeof(*dest) * (i + 1));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("ft_strdup : %s\n", ft_strdup(av[1]));
		printf("strdup : %s\n", strdup(av[1]));
	}
	return (0);
}

