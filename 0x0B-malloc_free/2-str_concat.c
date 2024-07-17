#include <stdlib.h>

/**
 * str_concat - This function concatenates two strings
 *
 * @s1: This the first string
 * @s2: This second string
 *
 * Return: The pointer to newly allocated space with concatenated string,
 * or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *concatate;
	unsigned int lnt1 = 0, lnt2 = 0, idx1, idx2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lnt1])
		lnt1++;
	while (s2[lnt2])
		lnt2++;

	concatate = malloc(sizeof(char) * (lnt1 + lnt2 + 1));

	if (concatate == NULL)
		return (NULL);

	for (idx1 = 0; idx1 < lnt1; idx1++)
		concatate[idx1] = s1[idx1];

	for (idx2 = 0; idx2 < lnt2; idx2++, idx1++)
		concatate[idx1] = s2[idx2];

	concatate[idx1] = '\0';

	return (concatate);
}
