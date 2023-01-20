/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 19:12:57 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/18 15:13:35 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporary_space;

	temporary_space = *a;
	*a = *a / *b;
	*b = temporary_space % *b;
}
/*
int	main(void)
{
	int	vara = 12;
	int	varb = 2;

	printf("value at first pointer %d\n", vara);
	printf("value at second pointer %d\n", varb);
	ft_ultimate_div_mod(&vara, &varb);
	printf("value at first pointer %d\n", vara);
	printf("value at second pointer %d\n", varb);
	return (0);
}*/
