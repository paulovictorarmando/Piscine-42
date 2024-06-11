/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguengo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:32:15 by hguengo           #+#    #+#             */
/*   Updated: 2024/03/17 17:32:20 by hguengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
}

void	ft_error_dict(void)
{
	write (2, "Dict Error\n", 11);
}

int	passou(char *str)
{
	if (ft_strlen(str) > \
	ft_strlen("1000000000000000000000000000000000000000"))
	{
		ft_error_dict();
		return (1);
	}
	return (0);
}

int	ver(int argc, char **argv)
{
	char	*dictpath;
	char	*nbr;

	if (argc == 1)
		if (passou(argv[1]))
			return (1);
	if (!ft_check_args(argc, argv, &dictpath, &nbr))
	{
		ft_error();
		return (1);
	}
	if (!ft_check_dict(dictpath))
	{
		free(nbr);
		ft_error_dict();
		return (1);
	}
	if (!ft_init(dictpath, nbr))
	{
		ft_error_dict();
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		return (ver(argc, argv));
	}
	else
		ft_error_dict();
	return (0);
}
