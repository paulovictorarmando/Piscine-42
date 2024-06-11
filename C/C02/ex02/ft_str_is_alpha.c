/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 04:43:42 by parmando          #+#    #+#             */
/*   Updated: 2024/03/06 09:44:09 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	up(char a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	low(char b)
{
	if (b >= 97 && b <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
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
			if (up(str[a]) || low(str[a]))
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
