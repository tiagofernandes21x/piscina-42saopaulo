#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	 main()
{
	int matrix[5];

	matrix[0] = 55;
	matrix[1] = 9;
	matrix[2] = 0;
	matrix[3] = 6;
	matrix[4] = 2;

	printf("Antes  %d, %d, %d, %d, %d \n", matrix[0], matrix[1], matrix[2], matrix[3], matrix[4]);

	ft_sort_int_tab(&matrix[0], 5);

	printf("Depois %d, %d, %d, %d, %d ", matrix[0], matrix[1], matrix[2], matrix[3], matrix[4]);
}