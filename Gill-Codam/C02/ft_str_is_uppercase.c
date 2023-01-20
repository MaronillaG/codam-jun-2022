/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:31:47 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/22 16:17:32 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (!(str[i] >= 65 && str[i] <= 90))
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
	char	*test_string;

	test_string = "THISISMYSTRING";
	printf("%s\n", test_string);
	printf("Show me 1 if all the letters are uppercase:\n");
	printf("%d", ft_str_is_uppercase(test_string));
}*/
