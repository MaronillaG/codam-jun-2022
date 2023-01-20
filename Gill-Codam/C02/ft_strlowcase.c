/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 21:55:47 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/23 10:28:57 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}
/*
int	main(void)
{
	char	mystring[100];

	mystring [100] = "WHY ARE YOU SHOUTING? I'M NOT SHOUTING. YOU ARE.";
	printf("%s", ft_strlowcase(mystring));
}*/
