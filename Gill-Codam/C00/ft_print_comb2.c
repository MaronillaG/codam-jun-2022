/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_com2.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 16:47:39 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/15 14:08:11 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_this(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	first_pair;
	int	sec_pair;

	first_pair = 0;
	while (first_pair <= 98)
	{
		sec_pair = first_pair + 1;
		while (sec_pair <= 99)
		{
			print_this((first_pair / 10) + 48);
			print_this((first_pair % 10) + 48);
			write(1, " ", 1);
			print_this((sec_pair / 10) + 48);
			print_this((sec_pair % 10) + 48);
			if (first_pair < 98)
			{
				write(1, ", ", 2);
			}
			sec_pair++;
		}
		first_pair++;
	}
}
//int	main()
//{
//	ft_print_comb2();
//	return 0;
//}
