#include "main.h"
#include <stdlib.h>

/**
 * argstostr - This the function that concatenates all the
 * arguments of the program
 *
 * @ac: This is the argument count
 * @av: This is the argument vector
 *
 * Return: To the pointer to new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *tostr;
	int idx1, idx2, idx3, lnt = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (idx1 = 0; idx1 < ac; idx1++)
	{
	for (idx2 = 0; av[idx1][idx2]; idx2++)
		lnt++;
	lnt++
	}

	tostr = malloc(sizeof(char) * (lnt + 1));
	if (tostr == NULL)
	return (NULL);

	idx3 = 0;
	for (idx1 = 0; idx1 < ac; idx1++)
	{
	for (idx2 = 0; av[idx1][idx2]; idx2++)
	{
		tostr[idx3] = av[idx1][idx2];
		idx3++;
	}
	tostr[idx3] = '\n';
	idx3++;
	}
	tostr[idx3] = '\0';

	return (tostr);
}
