/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:40:06 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/23 22:22:53 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i != (size / 2))
	{
		t = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = t;
		i++;
	}
}
/*
int	main()
{
	int	a[] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(a, 6);
	for(int i = 0;i < 6;i++)
	{
		printf("%d", a[i]);
	}
}*/
