#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main()
{
	int aa = 27;
	int bb = 5;

	ft_ultimate_div_mod(&aa, &bb);
	printf("Resultado divisão %d, \n Resultado modulo %d", aa, bb);

}