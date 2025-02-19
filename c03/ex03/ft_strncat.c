/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:07:42 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/29 12:47:31 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	while (dest[i])
		i++;
	s = 0;
	while (src[s] && s < nb)
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int     main(void)
{
        char    dest[] = "ME ";
        char    src[] = "ARAI a";
        ft_strncat(dest, src, 2);
        printf("%s", dest);
        return (0);
}*/
