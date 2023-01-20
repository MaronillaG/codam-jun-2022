/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbalm <dbalm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:27:56 by dbalm             #+#    #+#             */
/*   Updated: 2022/06/19 16:51:55 by dbalm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_is_printable(char c)
{
	return (c >= 32 && c <= 127);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (char_is_printable(*str))
			write(1, str, 1);
		else
		{
		}
		str++;
	}
}
