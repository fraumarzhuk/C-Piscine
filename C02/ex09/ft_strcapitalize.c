/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:39:18 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/20 22:55:55 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_num_or_alph(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalized;

	i = 0;
	capitalized = 1;
	while (str[i] != '\0')
	{
		if (ft_is_num_or_alph(str[i]) == 0)
		{
			capitalized = 1;
			i++;
			continue ;
		}
		if (capitalized == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			capitalized = 0;
		}
		else if (capitalized == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else
			capitalized = 0;
		i++;
	}
	return (str);
}

int	ft_is_num_or_alph(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	if (c >= '0' && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// int main() {
//     char str1[] = "salut, cOMMent tu vas ?"
// "42mots quarante-deux; cinquante+et+un";
//     printf("Original string 1: %s\n", str1);
//     ft_strcapitalize(str1);
//     printf("Capitalized string 1: %s\n", str1);
//     return 0;
// }
