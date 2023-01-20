/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 15:30:41 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/15 17:44:37 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writeitout(char i, char j, char k);

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				writeitout(i, j, k);
				k++;
			}
			j = j + 1;
			k = j + 1;
		}
		i = i + 1;
		j = (i - 1) + 1;
	}
}

void	writeitout(char i, char j, char k)
{
	if (i == '7' && j == '8' && k == '9')
	{
		write (1, &i, 1);
		write (1, &j, 1);
		write (1, &k, 1);
	}
	else
	{
		write (1, &i, 1);
		write (1, &j, 1);
		write (1, &k, 1);
		write (1, ", ", 2);
	}
}
