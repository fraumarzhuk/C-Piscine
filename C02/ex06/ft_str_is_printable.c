/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:26:21 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/18 19:42:39 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (str == 0)
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if (!(*str >= ' ' && *str <= '~'))
			{
				return (0);
			}
			str++;
		}
		return (1);
	}
}

// #include <stdio.h>

// int main(void) {
//     char str1[] = "HELLOWORLD";
//     char str2[] = "Hello,\tworld!\n";
// 	char str3[0];
//     if (ft_str_is_printable(str1)) {
//         printf("%s returned 1\n", str1);
//     } else {
//         printf("%s returned 0\n", str1);
//     }
//     if (ft_str_is_printable(str2)) {
//         printf("%s returned 1\n", str2);
//     } else {
//         printf("%s returned 0\n", str2);
//     }

// 	if (ft_str_is_printable(str3)) {
//         printf("%s returned 1\n", str3);
//     } else {
//         printf("%s returned 0\n", str3);
//     }
//     return 0;
// }