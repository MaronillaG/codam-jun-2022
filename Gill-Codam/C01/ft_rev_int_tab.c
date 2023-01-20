/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/18 16:38:55 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/20 13:43:20 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_platform;
	int	counter;

	counter = 0;
	while (counter < (size / 2))
	{
		temp_platform = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = temp_platform;
		counter++;
	}
}
