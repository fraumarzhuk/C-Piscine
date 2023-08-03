/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:23:17 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/25 22:04:40 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	minus_checker(int even_odd)
{
	even_odd = even_odd % 2;
	if (even_odd == 1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	ch;

	i = 0;
	minus = 0;
	ch = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	minus = minus_checker(minus);
	while (str[i] >= '0' && str[i] <= '9')
	{
		ch = (ch * 10) + (str[i] - '0');
		i++;
	}
	return (ch * minus);
}
