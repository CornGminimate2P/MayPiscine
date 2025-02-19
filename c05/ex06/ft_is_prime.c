/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:14:17 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/03 21:07:07 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	k;
	int	i;
	int	s;

	k = ft_sqrt(nb);
	i = 2;
	s = 0;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= k)
	{
		if (nb % i == 0)
		{
			s = 1;
			break ;
		}
		i++;
	}
	if (s == 1)
		return (0);
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	u;

	u = 7;
	i = ft_is_prime(u);
	if (i == 0)
		printf("(%d) %d this number is not prime",i , u);
	else if (i == 1)
		printf("(%d) %d this number is prime",i , u);
}*/
