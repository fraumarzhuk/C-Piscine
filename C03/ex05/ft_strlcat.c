/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:48:35 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/25 00:12:57 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	i = 0;
	while (src[src_len])
	{
		src_len++;
	}
	while (dest[dest_len] && dest_len < size)
	{
		dest_len++;
	}
	if (dest_len >= size)
		return (size + src_len);
	while ((dest_len + i + 1 < size) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
