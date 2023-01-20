/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 14:43:47 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/20 20:51:50 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp_space;
	int	counter;

	counter = 0;
	while (counter < (size / 2))
	{
		if (tab[counter] > tab [counter + 1])
		{
			temp_space = tab[counter];
			tab[counter] = tab[counter + 1];
			tab[counter + 1] = temp_space;
			counter ++;
		}
		else
		{
			counter++;
		}
	}
}

int	main()
{
	int barbara[4] = {15, 2, 7, 21};
	int index = 0;
	while (index < 4)
	{
		printf("%d ", barbara[index]);
		index++;
	}
	ft_sort_int_tab(barbara, 4);
	write(1, "\n",1);
	printf("%d %d %d %d ", barbara[0], barbara[1], barbara[2], barbara[3]);
	return (0);
}
