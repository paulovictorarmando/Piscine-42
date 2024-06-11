/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:48:32 by parmando          #+#    #+#             */
/*   Updated: 2024/03/17 21:01:47 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	indexv;

	while (argc > 1)
	{
		indexv = 0;
		while (argv[argc - 1][indexv] != '\0')
			indexv++;
		write(1, argv[argc - 1], indexv);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
