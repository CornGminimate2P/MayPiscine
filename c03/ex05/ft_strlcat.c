/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:25:10 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/30 12:48:13 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lr;
	unsigned int	hr;
	unsigned int	mr;

	lr = 0;
	hr = 0;
	mr = 0;
	while (dest[lr])
		lr++;
	while (src[hr])
		hr++;
	if (size <= lr)
		return (size + hr);
	i = lr;
	while (i + mr < size - 1 && src[mr])
	{
		dest[i + mr] = src[mr];
		mr++;
	}
	dest[i + mr] = '\0';
	return (lr + hr);
}
/*#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	dest[] = "me";
	char	src[] = "1234567";
	char    hay[] = "me";
        const char stack[] = "1234567";
	unsigned int	d;
	unsigned int 	i;
	d = 0;
	i = 0;
	d = ft_strlcat(dest, src, 4);
	//printf("Lenght: %d Cat: %s\n", d, dest);
	i = strlcat(hay, stack, 4);
	printf("Lenght: %d Cat: %s\n", d, dest);
	printf("Lenght: %d Cat: %s", i, hay);
}*/
