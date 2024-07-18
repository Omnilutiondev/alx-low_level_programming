#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function that concatenates two strings
 *
 * @s1: This is the first string
 * @s2: This is the second string
 * @n: This is the number of bytes from s2 to concatenate
 *
 * Return: The pointer to a new string, or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int lnt1 = 0, lnt2 = 0, idx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lnt1])
		lnt1++;
	while (s2[lnt2])
		lnt2++;

	n = (n >= lnt2) ? lnt2 : n;
	nconcat = malloc(sizeof(char) * (lnt1 + n + 1));
	if (nconcat == NULL)
		return (NULL);

	for (idx = 0; idx < lnt1; idx++)
		nconcat[idx] = s1[idx];
	for (idx = 0; idx < n; idx++)
		nconcat[lnt1 + idx] = s2[idx];
	nconcat[lnt1 + n] = '\0';

	return (nconcat);
}
