#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated space in memory,
 * 		which contains a copy of the string given as a parameter
 *
 * @str: This the string to duplicate
 *
 * Return: The pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *rdup;
	unsigned int idx, lnt = 0;

	if (str == NULL)
		return (NULL);

	while (str[lnt])
		lnt++;

	rdup = malloc(sizeof(char) * (lnt + 1));

	if (rdup == NULL)
		return (NULL);

	for (idx = 0; idx <= lnt; idx++)
		rdup[idx] = str[idx];

	return (rdup);
}
