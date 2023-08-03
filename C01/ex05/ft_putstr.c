/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:41:10 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/17 12:14:49 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	write(1, str, n);
}

/*
int main(void)
{
	ft_putstr("Hello \n world");
	return 0;
}
*/