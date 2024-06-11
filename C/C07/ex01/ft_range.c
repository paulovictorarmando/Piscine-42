/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 01:31:00 by parmando          #+#    #+#             */
/*   Updated: 2024/03/18 01:31:24 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	*tmp;

	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(int) * ((long long)max - min));
	if (!ret)
		return (0);
	tmp = ret;
	while (min < max)
		*(tmp++) = min++;
	return (ret);
}
