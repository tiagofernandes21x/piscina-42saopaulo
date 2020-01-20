#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

int	main()
{
	char *myword;
	int count;

	myword = "Ola blz";

	count = ft_strlen(myword);
	printf("Quantidade de caracteres: %d",count);
}