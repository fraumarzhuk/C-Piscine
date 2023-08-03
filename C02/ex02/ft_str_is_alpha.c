/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:27:11 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/17 22:46:21 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (str == 0)
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
//     char str1[] = "HelloWorld";
//     char str2[] = "Hello123";
// 	char str3[0];
//     if (ft_str_is_alpha(str1)) {
//         printf("%s returned 1\n", str1);
//     } else {
//         printf("%s returned 0\n", str1);
//     }
//     if (ft_str_is_alpha(str2)) {
//         printf("%s returned 1\n", str2);
//     } else {
//         printf("%s returned 0\n", str2);
//     }

// 	if (ft_str_is_alpha(str3)) {
//         printf("%s returned 1\n", str3);
//     } else {
//         printf("%s returned 0\n", str3);
//     }
//     return 0;
// }