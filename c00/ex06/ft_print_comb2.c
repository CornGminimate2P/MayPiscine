/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:57:43 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/22 21:19:33 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_cal(int n)
{
	int	tens;
	int	ones;

	tens = (n / 10) + 48;
	ones = (n % 10) + 48;
	write(1, &tens, 1);
	write(1, &ones, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = (1 + (a - 0));
		while (b <= 99)
		{
			ft_cal(a);
			write(1, " ", 1);
			ft_cal(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
