/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 11:31:47 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/21 14:57:38 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char x)
{
	write(1, &x, 1);
}

void	ft_putstr(char *str)
{
	int	guide;

	guide = 0;
	while (str[guide] != '\0')
	{
		print_char(str[guide]);
		guide++;
	}
}
/*
int	main(void)
{
	ft_putstr("congratz mate you printed this string");
	return (0);
}*/
