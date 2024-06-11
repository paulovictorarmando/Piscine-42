/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:39:44 by parmando          #+#    #+#             */
/*   Updated: 2024/03/16 17:48:59 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	a;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	a = 1;
	while (a <= nb / 2 && a <= 46341)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}
