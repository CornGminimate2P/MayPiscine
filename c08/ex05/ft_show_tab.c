/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:43:00 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/13 19:20:14 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_nbr(int nb)
{
	if (nb == -2147483648)
		put_str("-2147483648");
	else if (nb < 0)
	{
		put_char('-');
		put_nbr(-nb);
	}
	else if (nb >= 10)
	{
		put_nbr(nb / 10);
		put_char((nb % 10) + 48);
	}
	else
		put_char(nb + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		put_str(par[i].str);
		put_char('\n');
		put_nbr(par[i].size);
		put_char('\n');
		put_str(par[i].copy);
		put_char('\n');
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}*/
