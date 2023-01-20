/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 16:18:40 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/22 17:30:00 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			while (str[i] >= 0 && str[i] <= 31)
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	*teststring;

	teststring = "kjasfhdjkshGGHJTJ789*";
	printf("This is my tester string: %s\n", teststring);
	printf("show 1 if test string only contains printable chars:\n");
	printf("RESULT = %d", ft_str_is_printable(teststring));
}*/
