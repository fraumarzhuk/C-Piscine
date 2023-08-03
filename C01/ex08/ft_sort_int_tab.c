/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:58:26 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/15 18:56:06 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		p;
	int		swapped;
	int		swap;

	swapped = 0; 
	while (swapped == 0)
	{
		swapped = 1;
		p = 0;
		while (p < size - 1)
		{
			if (tab[p] > tab[p + 1])
			{
				swap = tab[p];
				tab[p] = tab[p + 1];
				tab[p + 1] = swap;
				swapped = 0;
			}
			p++;
		}
	}
}
