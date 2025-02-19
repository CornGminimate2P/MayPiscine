/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:47:01 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/06 18:16:06 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*in;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	in = (int *)malloc(sizeof(int) * len);
	if (!in)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		in[i] = min;
		++min;
		++i;
	}
	return (in);
}
/*#include <stdio.h>
int	main()
{
        int min = 1;
	int max = 10;
	int len = max-min;
	int *range = ft_range(min, max);

	for(int i = 0; i < len; ++i)
    	{
        // %d = integer
        // \n = move to next line
        printf("%d\n", range[i]);
   	}
    	return(0);
}*/
