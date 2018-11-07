#include "ex06/ft_print_alphabet.c"
#include "ex07/ft_print_numbers.c"
#include "ex08/ft_is_negative.c"
#include "ex09/ft_ft.c"
#include "ex10/ft_swap.c"
#include "ex11/ft_div_mod.c"
#include "ex12/ft_iterative_factorial.c"
#include "ex13/ft_recursive_factorial.c"
#include "ex14/ft_sqrt.c"
#include "ex15/ft_putstr.c"
#include "ex16/ft_strlen.c"
#include "ex17/ft_strcmp.c"
#include "ex20/ft_strdup.c"
#include "ex21/ft_range.c"
//#include "ex25/ft_foreach.c"
//#include "ex26/ft_count_if.c"

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void	ft_print_tab(const int *s1, int length);
static int	ft_test1(char *s1);
static void	ft_test2(int nb);

int		main(void)
{
	int nb0;
	int nb1;
	int nb2;
	int nb3;
	int	*tab1;
	char *s1;
	char **s2;

	//Ex 06
	puts("Ex06:");
	ft_print_alphabet();putc('\n', stdout);

	//Ex 07
	puts("Ex07:");
	ft_print_numbers();putc('\n', stdout);

	//Ex 08
	puts("Ex08:");
	ft_is_negative(0);
	printf(" -> 0\n");
	ft_is_negative(-12);
	printf(" -> -12\n");
	ft_is_negative(-0);
	printf(" -> -0\n");
	ft_is_negative(234);
	printf(" -> 234\n");

	//Ex 09
	puts("Ex09:");
	nb0 = 0;
	printf("%d -> ", nb0);
	ft_ft(&nb0);
	printf("%d\n", nb0);

	//Ex 10
	puts("Ex10:");
	nb1 = 23;
	printf("( %d , %d ) => ", nb0, nb1);
	ft_swap(&nb0, &nb1);
	printf("( %d , %d )\n", nb0, nb1);

	//Ex11
	puts("Ex11:");
	nb2 = 95;
	nb3 = 67;
	printf("a = %d , b = %d , div = %d , mod = %d => ", nb0, nb1, nb2, nb3);
	ft_div_mod(nb0, nb1, &nb2, &nb3);
	printf("a = %d , b = %d , div = %d , mod = %d\n", nb0, nb1, nb2, nb3);
	nb1 = 0;
	printf("a = %d , b = %d , div = %d , mod = %d => ", nb0, nb1, nb2, nb3);
	ft_div_mod(nb0, nb1, &nb2, &nb3);
	printf("a = %d , b = %d , div = %d , mod = %d\n", nb0, nb1, nb2, nb3);
	nb1 = 10;
	nb0 = 5;
	printf("a = %d , b = %d , div = %d , mod = %d => ", nb0, nb1, nb2, nb3);
	ft_div_mod(nb0, nb1, &nb2, &nb3);
	printf("a = %d , b = %d , div = %d , mod = %d\n", nb0, nb1, nb2, nb3);
	nb1 = 3;
	nb0 = 23;
	printf("a = %d , b = %d , div = %d , mod = %d => ", nb0, nb1, nb2, nb3);
	ft_div_mod(nb0, nb1, &nb2, &nb3);
	printf("a = %d , b = %d , div = %d , mod = %d\n", nb0, nb1, nb2, nb3);

	//Ex12
	puts("Ex12:");
	printf("%d! = %d\n", 3, ft_iterative_factorial(3));
	printf("%d! = %d\n", 0, ft_iterative_factorial(0));
	printf("%d! = %d\n", 1, ft_iterative_factorial(1));
	printf("%d! = %d\n", 35, ft_iterative_factorial(35));
	printf("%d! = %d\n", -2, ft_iterative_factorial(-2));

	//Ex13
	puts("Ex13:");
	printf("%d! = %d\n", 3, ft_recursive_factorial(3));
	printf("%d! = %d\n", 0, ft_recursive_factorial(0));
	printf("%d! = %d\n", 1, ft_recursive_factorial(1));
	printf("%d! = %d\n", 35, ft_recursive_factorial(35));
	printf("%d! = %d\n", -2, ft_recursive_factorial(-2));

	//Ex14
	puts("Ex14:");
	printf("sqrt(%d) = %d\n", 5, ft_sqrt(5));
	printf("sqrt(%d) = %d\n", 0, ft_sqrt(0));
	printf("sqrt(%d) = %d\n", 53, ft_sqrt(53));
	printf("sqrt(%d) = %d\n", 25, ft_sqrt(25));
	printf("sqrt(%d) = %d\n", -5, ft_sqrt(-5));

	//Ex15
	puts("Ex15:");
	printf("Hello World ! => ");
	ft_putstr("Hello World !");
	printf("\nHello W\torld ! => ");
	ft_putstr("Hello W\torld !");
	printf("\nHello Wor\rld ! => ");
	ft_putstr("Hello Wor\rld ?");

	//Ex16
	puts("Ex16:");
	printf("ft_strlen(%s) = %d\n", "Hello World !", ft_strlen("Hello World !"));
	printf("ft_strlen(%s) = %d\n", "", ft_strlen(""));

	//Ex17
	puts("Ex17:");
	printf("ft_strcmp(%s, %s) = %d\n", "Hello", "Hello", ft_strcmp("Hello", "Hello"));
	printf("ft_strcmp(%s, %s) = %d\n", "Hello", "Helloiasf", ft_strcmp("Hello", "Helloiasf"));
	printf("ft_strcmp(%s, %s) = %d\n", "Hello", "hello", ft_strcmp("Hello", "hello"));
	printf("ft_strcmp(%s, %s) = %d\n", "AFIUlv", "Hello", ft_strcmp("AFIUlv", "Hello"));

	//Ex20
	puts("Ex20:");
	s1 = ft_strdup("Hello World !");
	printf("Hello World ! -> %s\n", s1);
	free(s1);
	s1 = ft_strdup("This is a");
	printf("This is a -> %s\n", s1);
	free(s1);

	//Ex21
	puts("Ex21:");
	nb0 = 0;
	nb1 = 10;
	printf("( %d , %d ) -> ", nb0, nb1);
	tab1 = ft_range(nb0, nb1);
	puts("OK");
	ft_print_tab(tab1, nb1 - nb0); putc('\n', stdout);

	/*
	//Ex25
	puts("Ex25:");
	ft_print_tab(tab1, nb1 - nb0);
	printf(" --ft_putdigit--> ");
	ft_foreach(tab1, nb1 - nb0, &ft_test2);putc('\n', stdout);

	//Ex 26
	puts("Ex26:");
	s2 = (char **)malloc(4 * sizeof(char *));
	s2[0] = ft_strdup("Hello World");
	s2[1] = ft_strdup("Hi !");
	s2[2] = ft_strdup("Mr Missicks !");
	s2[3] = NULL;
	printf("expect 2 : %d\n", ft_count_if(s2, &ft_test1));
	*/
}

int		ft_test1(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i > 5);
}

/*
void	ft_test2(int nb)
{
	putc(nb + '0', stdout);
}

void	ft_print_tab(const int *tab, int length)
{
	int i;

	i = 0;
	while (i < length)
		putc(tab[i++] + '0', stdout);
}
*/
