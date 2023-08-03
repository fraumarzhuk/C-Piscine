/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:16:00 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/20 14:58:15 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

// #include <stdio.h>

// int main() {
//     char source[] = "Hello, World!";
//     char destination[20];
//     unsigned int copied_len = ft_strlcpy(destination, source, 7);

//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);
//     printf("Copied Length: %u\n", copied_len);

//     return 0;
// }