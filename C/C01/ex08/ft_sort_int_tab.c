/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:54:25 by parmando          #+#    #+#             */
/*   Updated: 2024/03/04 16:50:23 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	menor;
	int	i;
	int	s;
	int	t;
	int	other;

	i = 0;
	s = size;
	while (i < s)
	{
		menor = i;
		t = i + 1;
		while (t < s)
		{
			if (tab[t] < tab[menor])
			{
				other = tab[t];
				tab[t] = tab[menor];
				tab[menor] = other;
			}
			t++;
		}
		i++;
	}
}
