/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:39:56 by parmando          #+#    #+#             */
/*   Updated: 2024/03/18 00:40:03 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*ret;
	char		*tmp;
	long long	strs_len;
	int			i;

	if (!size)
	{
		ret = ((char *)malloc(1));
		ret[0] = 0;
		return (ret);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	ret = (char *)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	tmp = ft_strcat(ret, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = 0;
	return (ret);
}
