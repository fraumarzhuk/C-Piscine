/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:58:45 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/20 13:45:24 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
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
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
			i++;
		}
		return (str);
	}
}

// #include <stdio.h>

// char *ft_strlowcase(char *str);

// int main(void)
// {
//     char str1[] = "HELLO WORLD";
//     char str2[] = "aBBc123";
//     char str3[] = "";

//     printf("Original string 1: %s\n", str1);
//     ft_strlowcase(str1);
//     printf("Lowercase string 1: %s\n\n", str1);

//     printf("Original string 2: %s\n", str2);
//     ft_strlowcase(str2);
//     printf("Lowercase string 2: %s\n\n", str2);

//     printf("Original string 3: %s\n", str3);
//     ft_strlowcase(str3);
//     printf("Lowercase string 3: %s\n\n", str3);

//     return 0;
// }