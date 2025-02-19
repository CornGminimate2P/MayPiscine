/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:09:29 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/29 12:28:23 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s2[i] || s1[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*dest = "z";
	char	*src = "aab";
	int	i;
	int	a;
	i = ft_strncmp(dest, src, 2);
	a = strncmp(dest, src, 2);
	printf("%d", i);
}*/
