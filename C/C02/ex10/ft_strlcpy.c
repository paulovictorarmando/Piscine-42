/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:03:10 by parmando          #+#    #+#             */
/*   Updated: 2024/03/09 09:30:40 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	if (size > 0)
	{
		while (b < size - 1 && src[b] != '\0')
		{
			dest[b] = src[b];
			b++;
		}
	}
	dest[b] = '\0';
	return (a);
}
