#include <stdio.h>


int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			return (1);
		}
		else
		{
		return (0);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char arr[] = " geg";
	printf("My test array is: %s\n", arr);
	printf ("Show 1 if there are only numbers in the string: \n");
	printf ("%d", ft_str_is_numeric(arr));
}
