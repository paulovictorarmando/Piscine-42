/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:42:38 by parmando          #+#    #+#             */
/*   Updated: 2024/03/06 12:42:41 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[a])
	{
		if ((str[a] >= 32) && (str[a] <= 126))
		{
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
