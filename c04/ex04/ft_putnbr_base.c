/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:28:20 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/12 23:39:06 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	check_base(char *b)
{
	int	i;
	int	k;
	int	s;

	i = 0;
	k = str_len(b);
	if (k <= 1)
		return (0);
	while (b[i])
	{
		if (b[i] == '+' && b[i] == '-')
			return (0);
		s = i + 1;
		while (b[s])
		{
			if (b[i] == b[s])
				return (0);
			s++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	b;
	unsigned int	nb;

	if (check_base(base) != 0)
	{
		b = str_len(base);
		if (nbr < 0)
		{
			put_char('-');
			nbr *= -1;
		}
		nb = nbr;
		if (check_base(base) == 1)
		{
			if (nb / b > 0)
			{
				ft_putnbr_base(nb / b, base);
				ft_putnbr_base(nb % b, base);
			}
			else
				put_char(base[nb % b]);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(10, "phonyjuNg");
}*/
