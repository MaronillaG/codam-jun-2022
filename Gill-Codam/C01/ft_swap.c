/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 14:28:40 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/17 13:44:24 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	spare_basket;

	spare_basket = *a;
	*a = *b;
	*b = spare_basket;
}

/*int	main(void)
{
	int	gill;
	int	future_gill;
	int	*a;
	int	*b;
	
	gill = 32;
	future_gill = 50;
	a = &gill;
	b = &future_gill;
	printf("Gill is currently %d years old \n", gill);
	write(1, "\n", 1);
	ft_swap(a, b);
	printf("Gill is now %d years old \n", gill);
	printf("Really? Yes, Gill is %d years old", *a);
	return (0);
}*/
