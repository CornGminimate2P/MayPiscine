/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:09:01 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/29 20:40:36 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (size == 0)
		return (l);
	while (src[i] && --size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
/*#include <stdio.h>
int	main(void)
{
	char	a[] = "";
	char	b[] = "stop";
	int	l;
	char	*dest;
	char	*src;

	dest = a;
	src = b;

	l = ft_strlcpy(dest, src, 1);
	printf("%d, %s", l, dest);
}*/
