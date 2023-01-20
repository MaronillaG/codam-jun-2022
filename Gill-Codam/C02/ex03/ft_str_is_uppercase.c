#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		while (str[i] >= 65 && str[i] <= 90 )
		{
			return ();
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char *test_string;
	
	test_string = "This Is my String";
	printf("%s\n", test_string);
	printf("Show me 1 if all the letters are uppercase:\n");
	printf("%d", ft_str_is_uppercase(test_string));
}
