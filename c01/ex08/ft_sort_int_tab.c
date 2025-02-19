/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:16:36 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/23 22:21:31 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	a[] = {7, 6, 5, 4, 3, 2, 1};
	int	i;

	i = 0;
	ft_sort_int_tab(a, 7);
	while (i < 7)
	{
		printf("%d", a[i]);
		i++;
	}
}*/
