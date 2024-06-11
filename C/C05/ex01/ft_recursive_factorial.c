/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:51:48 by parmando          #+#    #+#             */
/*   Updated: 2024/03/16 08:51:54 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb == 0 || nb == 1)
			nb = 1;
		else
			nb *= ft_recursive_factorial(nb - 1);
	}
	else
		return (0);
	return (nb);
}
