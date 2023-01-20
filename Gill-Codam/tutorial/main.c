/* ************************************************************************** */

/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: gmaronil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/23 17:29:10 by gmaronil      #+#    #+#                 */
/*   Updated: 2022/06/23 17:39:09 by gmaronil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//./a.out "beans" "tst"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	string_index;
	int char_index;

	string_index = 1;
	char_index = 0;
	while (argv[string_index])
	{
		while (argv[string_index][char_index])
		{
			write(1, &argv[string_index][char_index], 1);
			char_index++;
		}
		char_index = 0;
		write(1, "\n", 1);
		string_index++;
	}
}
