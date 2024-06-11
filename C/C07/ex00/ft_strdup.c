/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 01:30:21 by parmando          #+#    #+#             */
/*   Updated: 2024/03/18 01:30:28 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long	len;
	char		*ret;

	len = 0;
	while (src[len])
		++len;
	ret = (char *)malloc(len + 1);
	ret[len] = 0;
	while (--len >= 0)
		ret[len] = src[len];
	return (ret);
}
