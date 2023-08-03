/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:30:51 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/17 15:06:15 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmpr;
	int	start;
	int	end;

	start = 0;
	end = size -1;
	while (start < end)
	{
		tmpr = tab[end];
		tab[end] = tab[start];
		tab[start] = tmpr;
		start++;
		end--;
	}
}

/*
#include <stdio.h>

int main(void)
{
	int array[7] = {3, 4, 8, 100, -9, 6, 8};
	int loop;
	ft_rev_int_tab(array, 7);
	for(loop =0; loop < 7; loop++)
	{
		printf("%d", array[loop]);
		printf("%s", ", ");
	}
}
*/