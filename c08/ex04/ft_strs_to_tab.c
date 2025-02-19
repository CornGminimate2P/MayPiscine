/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 00:59:10 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/13 23:43:42 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*str_dup(char *s)
{
	int		i;
	char	*k;

	i = 0;
	k = (char *)malloc(sizeof(char) * (str_len(s) + 1));
	if (!k)
		return (NULL);
	while (s[i])
	{
		k[i] = s[i];
		i++;
	}
	k[i] = '\0';
	return (k);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*k;

	i = 0;
	k = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	while (!k)
		return (NULL);
	while (i < ac)
	{
		k[i].size = str_len(av[i]);
		k[i].str = av[i];
		k[i].copy = str_dup(av[i]);
		i++;
	}
	k[i].str = 0;
	k[i].size = 0;
	k[i].copy = 0;
	return (k);
}
/*#include <stdio.h>
int	main(void)
{
	char	*a[] = {"Hello", "World"};
	t_stock_str	*st;
	int	i;

	st = ft_strs_to_tab(2, a);
	i = 0;
	while (st[i].str)
	{
		printf("%s", st[i].str);
		printf("%d", st[i].size);
		printf("%s", st[i].copy);
		i++;
	}
}*/
