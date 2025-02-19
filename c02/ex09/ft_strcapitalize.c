/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:23:29 by sisingja          #+#    #+#             */
/*   Updated: 2024/05/29 16:31:02 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*lower(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		i++;
	}
	return (s);
}

int	check_add(char *w)
{
	if ((*w >= 0 && *w <= 47) || (*w >= 58 && *w <= 64))
		return (1);
	else if ((*w >= 91 && *w <= 96) || (*w >= 123 && *w <= 126))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		exp;
	char	w;

	i = 0;
	exp = 1;
	str = lower(str);
	while (str[i])
	{
		w = str[i];
		if (check_add(&w) == 1)
			exp = 1;
		else if (exp == 1)
		{
			if (str[i] >= 48 && str[i] <= 57)
				exp = 0;
			else if (str[i] == str[0] || (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
				exp = 0;
			}
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char	*a;
	char	b[] = "Salut, Comment Tu Vas ? 
	42mots Quarante-Deux; Cinquante+Et+Un";
	a = ft_strcapitalize(b);
	printf("%s", a);
}*/
