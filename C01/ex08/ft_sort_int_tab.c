/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 23:36:05 by edbarbos          #+#    #+#             */
/*   Updated: 2019/11/28 01:48:27 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int maior;

	while (size >= 1)
	{
		maior = tab[size - 1];
		i = 0;
		while (i < size)
		{
			if (maior < tab[i])
			{
				maior = tab[i];
				ft_swap(&tab[i], &tab[size - 1]);
			}
			i++;
		}
		size--;
	}
}
