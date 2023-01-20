/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 14:43:47 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/23 10:24:06 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp_space;
	int	counter;
	int	temp;

	temp = 1;
	while (temp == 1)
	{
		temp = 0;
		counter = 0;
		while (counter < size)
		{
			if (tab[counter] > tab [counter + 1])
			{
				temp_space = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = temp_space;
				counter ++;
				temp = 1;
			}
			else
			{
				counter++;
			}
		}
	}
}

int	main()
{
	int barbara[8] = {1599, -2, 0, 21, 69, 8542, 8, -3657};
	int index = 0;
//	while (index < 8)
//	{
//		printf("%d ", barbara[index]);
//		index++;
//	}
	ft_sort_int_tab(barbara, 8);
	write(1, "\n", 1);
	index = 0;
	while (index < 8)
	{
		printf("%i ", barbara[index]);
		index ++;
	}
	return (0);
}
