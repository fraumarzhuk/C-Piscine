/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:34:43 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/16 22:15:55 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b; 
	*b = *a % *b;
	*a = c;
}

/*
#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}
*/