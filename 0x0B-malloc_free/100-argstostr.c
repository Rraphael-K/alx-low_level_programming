#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concat all arguments in the program
 * @ac: Number of Arguments
 * @av: Argument container
 * Return: Pointer to string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int len = 0, a, b, c;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
		len++;
	}

	len++;
	string = malloc(len * sizeof(char));
	if(string == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			string[c] = av[a][b];
			c++;
		}
		string[c] = '\n';
		c++;
	}
	string[c] = '\0';
	return (string);
}
