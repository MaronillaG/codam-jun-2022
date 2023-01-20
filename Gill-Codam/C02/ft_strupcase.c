/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 21:07:37 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/22 21:52:42 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
//
//int	main(void)
//{
//	char mytester[] = "transfOrm";
//	printf("%s", ft_strupcase(mytester));
//}
