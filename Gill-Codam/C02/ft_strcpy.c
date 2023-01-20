/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:51:23 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/23 10:29:32 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index ++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[30] = "cheers";
	char	src[] = "no worries";

	printf("%s", ft_strcpy(dest, src));
	return (0);
}*/
