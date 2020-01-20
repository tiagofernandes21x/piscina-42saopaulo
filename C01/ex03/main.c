#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int divi;
	int modu;

	ft_div_mod(13, 2, &divi, &modu);
	printf("Resultado divisão %d, \n Resultado modulo %d", divi, modu);
}