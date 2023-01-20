/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 17:13:31 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/05 17:19:38 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/* First and last row */
void	fl_row(int x, char first, char next)
{
	if (x-- >= 1)
	{
		ft_putchar(first);
		x--;
		while (x >= 1)
		{
			ft_putchar(next);
			x--;
		}
		if (x == 0)
		{
			ft_putchar(first);
		}
		write (1, "\n", 1);
	}
}

/* Middle.*/
void	midrow(int x, char brain, char space)
{
	if (x-- >= 1)
	{
		ft_putchar(brain);
		x--;
		while (x >= 1)
		{
			ft_putchar(space);
			x--;
		}
		if (x == 0)
		{
			ft_putchar(brain);
		}
		write(1, "\n", 1);
	}
}

/* RUSH - Recipe for Y */
void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (1, "x and y must be positive", 24);
	}	
	else
	{
		fl_row(x, 'A', 'B');
	}
	while (y > 2)
	{
		midrow(x, 'B', ' ');
		y--;
	}
	if (y > 1)
	{
		fl_row(x, 'C', 'B');
	}
}
