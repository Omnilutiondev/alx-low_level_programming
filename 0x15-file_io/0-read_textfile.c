#include "main.h"

/**
 * read_textfile - This function reads a text file and prints
 * it to the POSIX std output
 *
 * @filename: The filename (pointer string)
 * @letters: The total number of letters printed
 *
 * Return: The number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int trd;
	ssize_t ner, she;
	char *buff;

	if (!filename)
		return (0);

	trd = open(filename, O_RDONLY);

	if (trd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	ner =  read(trd, buff, letters);
	she = write(STDOUT_FILENO, buff, ner);

	close(trd);
	free(buff);

	return (she);
}
