/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:30:20 by parmando          #+#    #+#             */
/*   Updated: 2024/03/16 19:42:17 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;

	index = 0;
	if (argc >= 1)
	{
		while (argv[0][index] != '\0')
		{
			index++;
		}
	}
	write(1, argv[0], index);
	write(1, "\n", 1);
	return (0);
}
