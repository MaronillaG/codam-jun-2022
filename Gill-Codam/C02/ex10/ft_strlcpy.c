/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbalm <dbalm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:06:18 by dbalm             #+#    #+#             */
/*   Updated: 2022/06/20 19:48:51 by dbalm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < size)
			dest[i] = src[i];
		if (i == size - 1)
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	char src[] = "testSrcyaknow";
	char dest[14];
 unsigned int size = 4;
	unsigned int return_val = ft_strlcpy(dest, src, size);
	printf("return_val: %i \n", return_val);
	printf("src: %s \n", src);
	printf("dest: %s \n", dest);
	return (0);
}