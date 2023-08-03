/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:36:37 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/19 19:17:24 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
	{
		return (0);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			i++;
		}
		return (str);
	}
}

// #include <stdio.h>

// char *ft_strupcase(char *str);

// int main(void)
// {
//     char str1[] = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
//     char str2[] = "abc123";
//     char str3[] = "";

//     printf("Original string 1: %s\n", str1);
//     ft_strupcase(str1);
//     printf("Uppercase string 1: %s\n\n", str1);

//     printf("Original string 2: %s\n", str2);
//     ft_strupcase(str2);
//     printf("Uppercase string 2: %s\n\n", str2);

//     printf("Original string 3: %s\n", str3);
//     ft_strupcase(str3);
//     printf("Uppercase string 3: %s\n\n", str3);

//     return 0;
// }