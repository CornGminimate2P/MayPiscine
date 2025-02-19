/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:32:49 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/06 15:09:29 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*re;
	int	i;

	i = max - min;
	re = (int *)malloc(sizeof(int) * i);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (re == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = re;
	i = 0;
	while (min < max)
	{
		re[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
#include <limits.h>
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 1;
	max = INT_MAX;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
