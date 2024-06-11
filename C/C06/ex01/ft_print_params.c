/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:38:41 by parmando          #+#    #+#             */
/*   Updated: 2024/03/17 20:42:34 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	indexc;
	int	indexv;

	indexc = 1;
	while (indexc < argc)
	{
		indexv = 0;
		while (argv[indexc][indexv] != '\0')
			indexv++;
		write(1, argv[indexc], indexv);
		write(1, "\n", 1);
		indexc++;
	}
	return (0);
}
