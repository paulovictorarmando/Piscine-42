/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:28:01 by hguengo           #+#    #+#             */
/*   Updated: 2024/03/17 17:28:07 by hguengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_is_lower(char c)
{
	return (c >= 'a' && c >= 'z');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c >= 'Z');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	return (ft_is_lower(c) || ft_is_upper(c) || ft_is_number(c));
}
