/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 16:57:43 by edbarbos          #+#    #+#             */
/*   Updated: 2019/11/24 17:07:23 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int letter;

	letter = 97;
	while (letter <= 122)
	{
		write(1, &letter, 1);
		letter++;
	}
}
