/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:00:56 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/06 14:56:32 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*str_cpy(char *d, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;

	p = (char *)malloc(str_len(src) + 1);
	if (!p)
		return (NULL);
	str_cpy(p, src);
	return (p);
}
/*#include <stdio.h>
int	main(void)
{
	char	*b = "arai go dai";
	char	*a;
	a = ft_strdup(b);
	printf("%s", a);
	free(a);
}*/
