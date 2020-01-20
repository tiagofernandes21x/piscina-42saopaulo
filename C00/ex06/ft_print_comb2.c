/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 16:33:50 by edbarbos          #+#    #+#             */
/*   Updated: 2019/11/26 03:44:35 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int value)
{
	int print_d;
	int print_u;

	print_d = (value / 10) + 48;
	print_u = (value % 10) + 48;
	write(1, &print_d, 1);
	write(1, &print_u, 1);
}

void	ft_print_comb2(void)
{
	int column_1;
	int column_2;

	column_1 = 0;
	while (column_1 <= 99)
	{
		column_2 = column_1 + 1;
		while (column_2 <= 99)
		{
			ft_print_number(column_1);
			ft_print_char(' ');
			ft_print_number(column_2);
			if (column_1 < 98 || column_2 < 99)
			{
				ft_print_char(',');
				ft_print_char(' ');
			}
			column_2++;
		}
		column_1++;
	}
}
