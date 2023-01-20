/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbalm <dbalm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:16:26 by dbalm             #+#    #+#             */
/*   Updated: 2022/06/17 14:05:33 by dbalm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	char_is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	char_to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	char_to_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = char_to_lowercase(str[i]);
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*return_val;

	return_val = str;
	if (*str == '\0')
		return (str);
	str = ft_strlowcase(str);
	*str = char_to_uppercase(*str);
	str++;
	while (*str != '\0')
	{
		if (!char_is_alphanumeric(*(str - 1)))
		{
			*str = char_to_uppercase(*str);
		}
		str++;
	}
	return (return_val);
}

int main() {
char test_str[] =
"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(test_str));
    return (0);
}