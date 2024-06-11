/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:08:51 by parmando          #+#    #+#             */
/*   Updated: 2024/03/16 18:18:15 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	n;
	int	a;

	n = 0;
	if (nb >= 2)
	{
		a = 1;
		while (a < nb)
		{
			if (nb % a == 0)
				n++;
			a++;
		}
		if (!(n > 2))
			return (nb);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		nb = 2;
	i = nb;
	while (i < 2 * nb)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
