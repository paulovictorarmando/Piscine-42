/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:30:12 by parmando          #+#    #+#             */
/*   Updated: 2024/03/14 01:30:16 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchars(int i)
{
	int	a;
	int	b;

	a = ((i / 10) + 48);
	b = ((i % 10) + 48);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_combn(int n)
{
	ft_putchars(n);
}
