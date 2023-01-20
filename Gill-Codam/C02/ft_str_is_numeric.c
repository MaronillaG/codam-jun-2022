/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:14:37 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/23 17:58:16 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}


int	main(void)
{
	char	arr[] = "222d";

	printf("My test array is: %s\n", arr);
	printf ("Show 1 if there are only numbers in the string: \n");
	printf ("%d", ft_str_is_numeric(arr));
}
