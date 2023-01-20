/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 18:35:32 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/17 13:48:09 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	int div_result;
	int mod_result;

	a = 16;
	b = 2; 
	div = &div_result;
	mod = &mod_result;
	printf("a divided by b is %d \n", a / b);
	printf("where a is set at 16 and b is 2 \n");
	ft_div_mod(a, b, div, mod);
	printf("here's what's stored in the div pointer %d \n", *div);
	printf("here's whats stored in the mod pointer %d", *mod);
	return (0);
}*/
