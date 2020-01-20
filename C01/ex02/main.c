#include <stdio.h>

void	ft_swap(int *a, int *b);

int 	main(void)
{
	int x = 1;
	int y = 2;
	printf("Antes: %d e %d \n", x, y);

	ft_swap(&x, &y);

	printf("Depois: %d e %d \n", x, y);
}