#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char str);
int	ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int	ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
int	ft_str_is_alpha_c(char str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putstr_non_printable(char *str);

int	 main()
{

//Ex00
/*	char str1[60];
	char str2 [50] = "O que deve ser colado na Str1";
	
	char *str3 = ft_strcpy(str1, str2);
	ft_strcpy(str1, str2);
	printf("----%s-----\n", str3);
*/

//Ex01
	/*char str1[50];
	char *str2 = "Exercício 02";
	
	char *str3 = ft_strncpy(str1, str2, 4);
	//ft_strcpy(str1, str2);
	printf("----%s-----\n", str3);

*/
/*
//Ex02
	char *str = "AAAZZZaaaaazzz";
	char *str1 = "AAAZZZaaaaazzz$\\n";

	printf("String NÃO possui caracter que não letra: %d \n", ft_str_is_alpha(str));
	printf("String possui caracter que não letra: %d", ft_str_is_alpha(str1));
*/

/*
//Ex03
	char *str = "1234567890";
	char *str1 = "123\\n##&**";

	printf("String NÃO possui caracter que não seja um dígito: %d \n", ft_str_is_numeric(str));
	printf("String possui caracter que não não seja um dígito: %d", ft_str_is_numeric(str1));
*/

/*
//Ex04
	char *str = "abcdef";
	char *str1 = "aaabcAd";

	printf("String NÃO possui caracter que não seja minusculo: %d \n", ft_str_is_lowercase(str));
	printf("String possui caracter que não seja minusculo: %d", ft_str_is_lowercase(str1));
*/

/*
//Ex05
	char *str = "TUDOMAIUSCULO";
	char *str1 = "DSaaaEDS";

	printf("String NÃO possui caracter que não seja maiusculo: %d \n", ft_str_is_uppercase(str));
	printf("String possui caracter que não seja maiusculo: %d", ft_str_is_uppercase(str1));

*/


//Ex06 COMO TESTAR
/*	char *str = "\rTUDOMAI\naaaa*&USCULO";
	char *str1;
	
	str1 = "";


	printf("è pra sair 0: %d \n", ft_str_is_printable(str));
	printf("É pra sair 1: %d", ft_str_is_printable(str1));
*/

//Ex07
/*	char str[] = "TeStando com MINUsculas";

	printf("---%s---", ft_strupcase (str));
*/

//Ex08
/*	char str[] = "TeStando com MAiuSCulas";

	printf("---%s---", ft_strlowcase(str));	
*/

//Ex09
/*
	char str[100] = "oi, Tudo bem? 42palaVRas quarenta-e-duas; cinquenta+e+um";
	printf("---%s---", ft_strcapitalize(str));
	//printf("---%d---", ft_str_is_alpha_c('A'));
	//printf("---%d---", ft_str_is_alpha('a'));
	return 0;

*/
//Ex10

char str1[] = "Eduardo";
char str2[] = "AAABBBCCC";
printf("Resultado: %d \n",ft_strlcpy(str1, str2, 5));
printf("STRING1: %s \n", str1);
printf("STRING2: %s ", str2);


// Ex11
//char str1[] = "Oi\nvoce esta\t bem?";
//ft_putstr_non_printable(str1);

}