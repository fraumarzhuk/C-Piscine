/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:32:46 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/13 16:26:32 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_print_reverse_alphabet(void)
// {
// 	write(1, &"zyxwvutsrqponmlkjihgfedcba", 26);
// }

void	ft_print_reverse_alphabet(void)

{
	char	ch;

	ch = 'z';
	while (ch >= 'a')
	{
		write(1, &ch, 1);
		ch --;
	}
}
