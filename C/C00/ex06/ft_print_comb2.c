/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:12:02 by parmando          #+#    #+#             */
/*   Updated: 2024/03/01 03:18:19 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(int i)
{
	int	a;
	int	b;

	a = ((i / 10) + 48);
	b = ((i % 10) + 48);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (i <= 98)
	{
		while (a <= 99)
		{
			if (!(a == i))
			{
				ft_putchars(i);
				write(1, " ", 1);
				ft_putchars(a);
				if (!(i == 98 && a == 99))
				{
					write(1, ", ", 2);
				}
			}
			a++;
		}
		a = i + 1;
		i++;
	}
}
