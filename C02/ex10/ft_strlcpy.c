/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:33:42 by edbarbos          #+#    #+#             */
/*   Updated: 2019/13/09 23:34:13 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				tamanho;

	if (!src || !dest)
	{
		return (0);
	}
	tamanho = 0;
	while (src[tamanho])
		tamanho++;
	if (size == 0)
	{
		return (tamanho);
	}
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (tamanho);
}
