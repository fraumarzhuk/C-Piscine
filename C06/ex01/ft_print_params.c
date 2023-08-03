/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:44:43 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/31 13:29:22 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char param[])
{
	int	size;
	int	i;

	size = 0; 
	i = 0;
	while (param[i] != '\0')
	{
		size++;
		i++;
	}
	write(1, param, size);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argv[i] && argc)
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
