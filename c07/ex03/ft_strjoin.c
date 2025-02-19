/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:57 by sisingja          #+#    #+#             */
/*   Updated: 2024/06/13 22:28:42 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	str_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += str_len(strs[i]);
		if (i < (size - 1))
			j += str_len(sep);
		i++;
	}
	return (j + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		a;

	s = (char *)malloc(sizeof(char) * str_size(size, strs, sep));
	i = 0;
	a = 0;
	if (!s)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[a++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < (size - 1))
			s[a++] = sep[j++];
		i++;
	}
	s[a] = '\0';
	return (s);
}
/* #include <stdio.h>
 int main()
 {
     char *strs[] = {"Hello","This is","Jeremy","U betch"};
     printf("%s", ft_strjoin(4, strs, "-EE-"));
 }*/
