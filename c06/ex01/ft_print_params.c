/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:25:26 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/01 15:14:11 by sisingja         ###   ########.fr       */
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

	i = 1;
	while (i < gc)
	{
		while (gv[i])
		{
			put_str(gv[i]);
			write(1, "\n", 1);
			i++;
		}
		i++;
	}
	return (0);
}
