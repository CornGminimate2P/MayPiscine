/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:50:59 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/28 22:46:38 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	s;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		s = 0;
		while (str[i + s] == to_find[s])
		{
			if (to_find[s + 1] == '\0')
				return (str + i);
			s++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[] = "the boommer";
	char	b[] = "h";
	char	*c;
	char	*f;
	c = ft_strstr(a, b);
	f = strstr(a, b);
	printf("%s\n%s", c, f);
}*/
