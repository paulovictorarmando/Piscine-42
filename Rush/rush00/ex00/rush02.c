/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:37:31 by lmachado          #+#    #+#             */
/*   Updated: 2024/03/02 18:22:04 by lmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	matriz(int x, char a, char b, char f)
{
	int	l;

	l = 1;
	while (l <= x)
	{
		if (l == 1)
		{
			ft_putchar(a);
		}
		else if(l != x && l != 1)
		{
			ft_putchar(b);
		}
		else{
			ft_putchar(f);
		}
		l++;
	}
}

void	rush(int x, int y)
{
	int	c;

	c = 1;
	while (c <= y)
	{
		if (c == 1)
		{
			matriz(x, 'A', 'B', 'C');
		}
		else if (c != 1 && c != y)
		{
			matriz(x, 'B', ' ', 'B');
		}
		else
		{
			matriz(x, 'C', 'B', 'A');
		}
		c++;
		write(1, "\n", 2);
	}
}
