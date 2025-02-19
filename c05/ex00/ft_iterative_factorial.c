/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:55:10 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/03 21:43:50 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	unsigned int n;
	n = ft_iterative_factorial(-7);
	printf("%d", n);
}*/
