#include <stdlib.h>


/**
 * strtow - This function splits a string into words
 *
 * @tostr: This is the string to split
 *
 * Return: The pointer to an array of strings (words) or NULL if it fails
 */

char **strtow(char *tostr)
{
	char **words;
	int word_count = 0, idx1 = 0, idx2, idx3 = 0, lnt;

	if (!tostr || !*tostr)
	return (NULL);

	for (idx1 = 0; tostr[idx1]; idx1++)
	if ((idx1 == 0 || tostr[idx1 - 1] == ' ') && tostr[idx1] != ' ')
	word_count++;

	if (word_count == 0)
	return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
	return (NULL);

	for (idx1 = 0; tostr[idx1]; idx1++)
	if ((idx1 == 0 || tostr[idx1 - 1] == ' ') && tostr[idx1] != ' ')
	{
	for (lnt = 0; tostr[idx1 + lnt] && tostr[idx1 + lnt] != ' '; lnt++)
	;
	words[idx3] = malloc(sizeof(char) * (lnt + 1));
	if (!words[idx3])
	{
	while (idx3--)
	free(words[idx3]);
	free(words);
	return (NULL);
	}
	for (idx2 = 0; idx2 < lnt; idx2++)
	words[idx3][idx2] = tostr[idx1 + idx2];
	words[idx3][idx2] = '\0';
	idx3++;
	}
	words[idx3] = NULL;
	return (words);
}
