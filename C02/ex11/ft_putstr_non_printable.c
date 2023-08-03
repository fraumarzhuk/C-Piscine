/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:45:03 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/19 22:32:43 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_c_is_printable(char c);

int	ft_convert_to_hex(unsigned char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_c_is_printable(str[i]) == 0)
		{
			ft_convert_to_hex(str[i]);
		}
		else 
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	ft_c_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
	{
		return (0);
	}
	return (1);
}

int	ft_convert_to_hex(unsigned char c)
{
	char	*hex_digits;
	char	hex[3];

	hex_digits = "0123456789abcdef";
	hex[0] = hex_digits[c / 16];
	hex[1] = hex_digits[c % 16];
	hex[2] = '\0';
	write(1, "\\", 1);
	write(1, hex, 2);
	return (0);
}
// int main()
// {
//     char str[] = "Coucoƒvas bien ?";
//     ft_putstr_non_printable(str);
//     return 0;
// }
