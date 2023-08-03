/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:13:21 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/24 21:47:25 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + a] == to_find[a])
		{
			if (to_find[a + 1] == '\0')
			{
				return (&str[i]);
			}
			a++;
		}
		i++;
		a = 0;
	}
	return (NULL);
}
