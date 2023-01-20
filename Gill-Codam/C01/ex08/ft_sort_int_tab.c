/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 14:43:47 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/21 16:14:38 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp_space;
	int	counter;
	int	resetcheck;

	resetcheck = 0;
	while (resetcheck == 0)
	{
		resetcheck = 1;
		counter = 0;
		while (counter < size)
		{
			if (tab[counter] > tab [counter + 1])
			{
				temp_space = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = temp_space;
				counter ++;
			}
			resetcheck = 0;
			else
			{
				counter++;
			}
		}
	}
}

int	main(void)
{
	int	barbara[7] = {0, -999, 69, -2, 8, 1090, 4};
	int	index = 0;

	while (index < 7)
	{
		printf("%d ", barbara[index]);
		index++;
	}
	ft_sort_int_tab(barbara, 7);
	printf("\n");
	while (index < 7)
	{
		printf("%d ", barbara[index]);
		index++;
	}
	return (0);
}
