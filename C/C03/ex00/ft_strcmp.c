/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:51:49 by parmando          #+#    #+#             */
/*   Updated: 2024/03/06 21:25:43 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] > s2[a])
		{
			return (1);
		}
		else if (s1[a] < s2[a])
		{
			return (-1);
		}
		a++;
	}
	if (s1[a] != '\0')
	{
		return (1);
	}
	else if (s2[a] != '\0')
	{
		return (-1);
	}
	return (0);
}
