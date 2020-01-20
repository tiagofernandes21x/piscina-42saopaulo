/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 19:04:57 by edbarbos          #+#    #+#             */
/*   Updated: 2019/11/24 19:30:09 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		write(1, &number, 1);
		number++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
