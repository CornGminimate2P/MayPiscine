/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:04:07 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/04 14:02:36 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	k;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		k = i * i;
		if (k == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_sqrt(1);
	printf("%d", i);
}*/
