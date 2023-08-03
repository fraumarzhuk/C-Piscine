/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:59:59 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/30 17:25:48 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	swap(char **a, char **b)
{
	char	*tmpr;

	tmpr = *a;
	*a = *b;
	*b = tmpr;
}

void	bubble_sort(char *arr[], int n)
{
	int	i;
	int	swapped;
	int	j;

	i = 0;
	swapped = 1;
	while (i < n - 1 && swapped)
	{
		j = 0;
		swapped = 0;
		while (j < n - 1)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
			{
				swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	bubble_sort(argv + 1, argc - 1);
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
