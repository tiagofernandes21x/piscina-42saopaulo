/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:24:02 by edbarbos          #+#    #+#             */
/*   Updated: 2019/11/24 18:38:24 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int letter;

	letter = 122;
	while (letter >= 97)
	{
		write(1, &letter, 1);
		letter--;
	}
}
