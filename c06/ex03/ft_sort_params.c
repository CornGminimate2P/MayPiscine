/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:26:35 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/12 14:50:05 by sisingja         ###   ########.fr       */
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

int	str_comp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && a[i] == b[i])
	{
		i++;
	}
	return (a[i] - b[i]);
}

void	sort_str(int n, char **s)
{
	int		i;
	int		j;
	char	*k;

	i = 1;
	while (i < n)
	{
		j = i;
		while (j > 0 && str_comp(s[j - 1], s[j]) > 0)
		{
			k = s[j - 1];
			s[j - 1] = s[j];
			s[j] = k;
			j--;
		}
		i++;
	}
}

int	main(int gc, char **gv)
{
	int	i;

	i = 1;
	sort_str(gc, gv);
	while (gv[i])
	{
		put_str(gv[i]);
		write(1, "\n", 1);
		i++;
	}
}
