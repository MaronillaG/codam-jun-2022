/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:25:02 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/22 15:30:10 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}	
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *gillstring;
	gillstring = "Gilian likes C";
	printf("Show me the string: %s\n", gillstring);
	printf("Show me 1 if the entire string has lowercase:\n");
	printf("%d", ft_str_is_lowercase(gillstring));
}*/
