#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	 main()
{
	int matrix[3];

	matrix[0] = 1;
	matrix[1] = 9;
	matrix[2] = 5;

	printf("Antes  %d, %d, %d ", matrix[0], matrix[1], matrix[2]);
	
	ft_rev_int_tab(&matrix[0], 3);

	printf("Depois %d, %d, %d ", matrix[0], matrix[1], matrix[2]);
}