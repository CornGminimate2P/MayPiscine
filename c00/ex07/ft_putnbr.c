/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:34:34 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/22 21:20:12 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	tens;
	int	ones;

	tens = (nb / 10) + 48;
	ones = (nb % 10) + 48;
	write(1, &tens, 1);
	write(1, &ones, 1);
}

/*int	main(void)
{
	ft_putnbr(42);
	return (0);
}*/
