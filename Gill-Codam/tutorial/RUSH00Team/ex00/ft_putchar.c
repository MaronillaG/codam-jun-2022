/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 10:47:08 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/05 12:12:48 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char insertcharacter);

int	ft_putchar(char insertcharacter)
{
	write(1, &insertcharacter, 1);
	return (0);
}
