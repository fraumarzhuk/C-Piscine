/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 00:53:59 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/25 01:06:47 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	int	str_len;

	str_len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		str_len++;
		i++;
	}
	write(1, str, str_len);
}
