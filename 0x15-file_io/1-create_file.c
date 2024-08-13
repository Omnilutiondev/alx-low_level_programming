#include "main.h"

/**
 * create_file - This function creates a file with permissions
 * and copies content into it
 *
 * @filename: This is the filename of the file created
 * @text_content: This is the content to be copied into the file
 *
 * Return: 1 if successful or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fc;
	int content;
	int perm;

	if (!filename)
		return (-1);

	fc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fc == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (content = 0; text_content[content]; content++)
		;

	perm = write(fc, text_content, content);

	if (perm == -1)
		return (-1);
	close(fc);

	return (1);
}

