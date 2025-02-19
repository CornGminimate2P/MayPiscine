/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:53:05 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/13 14:03:42 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	neg;
	int	i;
	int	s;

	i = 0;
	neg = 1;
	s = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = (s * 10) + (str[i] - 48);
		i++;
		if (str[i] < '0' || str[i] > '9')
			return (s * neg);
	}
	return (s * neg);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	i = ft_atoi(" ++--1234ab567");
	printf("%d", i);
}*/
