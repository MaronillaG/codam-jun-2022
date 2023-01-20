/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 10:28:47 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/18 16:38:14 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] > 0)
	{
		while (str[counter] != '\0')
		{
			counter++;
		}
	}
	return (counter);
}
/*
int	main(void)
{
	char	*test_string;

	test_string = "Gillian";
	printf("%i\n", ft_strlen(test_string));
	return (0);
}*/
