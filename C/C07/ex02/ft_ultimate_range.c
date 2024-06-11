/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:39:29 by parmando          #+#    #+#             */
/*   Updated: 2024/03/18 00:39:38 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ret;
	int	*tmp;

	if (min >= max)
		return (0);
	ret = max - min;
	*range = (int *)malloc(sizeof(int) * ret);
	if (!*range)
		return (-1);
	tmp = *range;
	while (min < max)
		*(tmp++) = min++;
	return (ret);
}
