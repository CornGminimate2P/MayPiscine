/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:45:12 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/29 12:47:05 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;

	i = 0;
	while (s2[i] || s1[i])
	{
		a = (unsigned char)s1[i];
		b = (unsigned char)s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*dest = "lin";
	char	*src = "aux";
	int	i;
	int	a;
	i = ft_strcmp(dest, src);
	a = strcmp(dest, src);
	printf("%d\n%d", i, a);
}*/
