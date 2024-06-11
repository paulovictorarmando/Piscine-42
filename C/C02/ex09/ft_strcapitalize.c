/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:13:22 by parmando          #+#    #+#             */
/*   Updated: 2024/03/09 07:31:28 by parmando         ###   ########.fr       */
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

int	alpha(char str)
{
	if (up(str) || low(str))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	numeric(char a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 1;
	if (alpha(str[0]) && low(str[0]))
	{
		str[0] = str[0] - 32;
	}
	while (str[a] != '\0')
	{
		if (!(numeric(str[a - 1]) || alpha(str[a - 1])) && low(str[a]))
		{
			str[a] = str[a] - 32;
		}
		else
		{
			if ((numeric(str[a - 1]) || alpha(str[a - 1])) && up(str[a]))
			{
				str[a] = str[a] + 32;
			}
		}
		a++;
	}
	return (str);
}
