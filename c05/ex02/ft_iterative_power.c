/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:07:07 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/03 21:33:50 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	s;

	i = 1;
	s = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		nb = s * nb;
		i++;
	}
	return (nb);
}
/*#include <stdio.h>
int	main(void)
{
	unsigned int	i;

	i = ft_iterative_power(4, 1);
	printf("%d", i);
}*/
