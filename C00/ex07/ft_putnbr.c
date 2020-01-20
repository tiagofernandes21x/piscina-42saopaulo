/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:38:42 by edbarbos          #+#    #+#             */
/*   Updated: 2019/11/26 03:38:07 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int counter;
	int nb_value;
	int n;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (-1) * nb;
	}
	nb_value = nb;
	counter = 1;
	while (nb_value >= 10)
	{
		nb_value = nb_value / 10;
		counter = counter * 10;
	}
	while (counter >= 1)
	{
		n = (nb / counter);
		nb = nb % counter;
		n = n + 48;
		write(1, &n, 1);
		counter = counter / 10;
	}
}

int main(void)
{
	//ft_putnbr(-2147483647);

	ft_putnbr(-214);

	return (0);
}

