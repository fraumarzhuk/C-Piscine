/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 01:08:18 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/25 14:20:50 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_positive_num(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_put_positive_num(-nb);
	}
	else
	{
		ft_put_positive_num(nb);
	}
}

void	ft_put_positive_num(int nb)
{
	if (nb >= 10)
	{
		ft_put_positive_num(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
