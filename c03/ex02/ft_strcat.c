/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:41:07 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/28 13:32:16 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	s = 0;
	while (src[s])
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	dest[] = "kuay";
	char	src[] = "boom";
	ft_strcat(dest,src);
	printf("%s", dest);
}*/
