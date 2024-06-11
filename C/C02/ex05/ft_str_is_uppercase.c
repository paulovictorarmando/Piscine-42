/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:25:11 by parmando          #+#    #+#             */
/*   Updated: 2024/03/06 12:25:16 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	n;

	a = 0;
	if (str[a] == '\0')
	{
		n = 1;
	}
	else
	{
		while (str[a] != '\0')
		{
			if (str[a] >= 65 && str[a] <= 90)
			{
				n = 1;
			}
			else
			{
				n = 0;
				break ;
			}
			a++;
		}
	}
	return (n);
}
