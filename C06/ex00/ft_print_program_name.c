/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:17:59 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/31 13:28:02 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	size;
	int	i;

	size = 0; 
	i = 0;
	while (argv[0][i] != '\0' && argc != 0)
	{
		size++;
		i++;
	}
	write(1, argv[0], size);
	write(1, "\n", 1);
	return (0);
}
