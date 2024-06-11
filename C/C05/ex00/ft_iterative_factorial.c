/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:26:27 by parmando          #+#    #+#             */
/*   Updated: 2024/03/16 08:49:54 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	iterator;

	iterator = nb - 1;
	if (nb >= 0)
	{
		if (nb == 0 || nb == 1)
			nb = 1;
		else
		{
			while (iterator >= 1)
			{
				nb *= iterator;
				iterator--;
			}
		}
	}
	else
		return (0);
	return (nb);
}
