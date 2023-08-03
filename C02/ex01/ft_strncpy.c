/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:32:39 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/20 14:31:14 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*copy;

	copy = dest;
	if (n > 0)
	{
		while (n > 0 && *src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
			n--;
		}
		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}
	}
	return (copy);
}
// #include <stdio.h>

// int main()
// {
//     char src[] = "Hello, world!";
//     char dest[20];

//     unsigned int n = 25;
//     char *result = ft_strncpy(dest, src, n);

//     printf("Source string: %s\n", src);
//     printf("Copied string: %s\n", result);

//     return 0;
// }