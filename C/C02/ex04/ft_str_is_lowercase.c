/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:44:59 by parmando          #+#    #+#             */
/*   Updated: 2024/03/06 12:02:23 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
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
			if (str[a] >= 97 && str[a] <= 122)
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
