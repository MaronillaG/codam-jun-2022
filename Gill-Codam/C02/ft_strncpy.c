/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 16:47:10 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/23 10:29:15 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "GGG";
	char dest[50] = "empty spaces...";
	char dest2[50] = "empty spaces...";

	printf("%s\n", dest);
	printf("%s\n", ft_strncpy(dest, src, 4));
	printf("%s\n", strncpy(dest2, src, 4));
	return (0);
}*/
