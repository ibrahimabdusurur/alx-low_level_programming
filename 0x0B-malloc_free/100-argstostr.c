#include <stdlib.h>
#include "main.h"

/**
  * argstostr - concatenates all the arguments of your program.
  * @ac: number of command line arguments.
  * @av: An array containing the program command line arguments.
  *
  * Return: NULL if ac == 0 or av == NULL.
  *	    NULL if it fails.
  *	    a pointer to a new string otherwise.
  */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, i, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (i = 0; av[arg][i]; i++)
			len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	len = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (i = 0; av[arg][i]; i++)
			str[len++] = av[arg][i];

		str[len++] = '\n';
	}

	str[len] = '\0';

	return (str);
}
