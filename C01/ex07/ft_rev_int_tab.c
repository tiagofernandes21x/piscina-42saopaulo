/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 23:04:53 by edbarbos          #+#    #+#             */
/*   Updated: 2019/11/27 23:32:52 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int head;
	int tail;

	head = 0;
	tail = size - 1;
	while (head < tail)
	{
		ft_swap(&tab[head], &tab[tail]);
		head++;
		tail--;
	}
}
