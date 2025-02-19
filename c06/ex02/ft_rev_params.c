/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:32:56 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/01 15:24:35 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	main(int gc, char **gv)
{
	int	i;

	i = gc;
	while (i > 1)
	{
		put_str(gv[i - 1]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
