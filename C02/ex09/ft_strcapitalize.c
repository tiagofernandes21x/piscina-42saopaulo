/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:33:42 by edbarbos          #+#    #+#             */
/*   Updated: 2019/12/09 15:34:13 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_a(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int		is_a_c(char str)
{
	if (str < 'A' || str > 'Z')
		return (0);
	return (1);
}

int		is_num(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if ((is_a_c(str[i]) || is_a(str[i]) || is_num(str[i])) && c == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				*(str + i) = *(str + i) - 32;
			c = 1;
		}
		else if ((is_a_c(str[i]) || is_a(str[i]) || is_num(str[i])) && c == 1)
		{
			if (is_a_c(str[i]))
				str[i] = str[i] + 32;
		}
		else
			c = 0;
		i++;
	}
	return (str);
}
