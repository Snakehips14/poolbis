#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d\n", strcmp("bonjour", "bonjouz"));
        printf("%d\n", ft_strcmp("bonjour", "bonjouz"));
        printf("%d\n", ft_strcmp("bonjour", "buz"));
        printf("%d\n", ft_strcmp("bonjour", "bonjouz"));
        printf("%d\n", ft_strcmp("bour", "bonjouz"));

	return (0);
}
