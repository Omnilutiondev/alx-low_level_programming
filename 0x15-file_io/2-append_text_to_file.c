#include "main.h"

/**
 * append_text_to_file - This function adds text to an
 * already existing file at the end
 *
 * @filename: This is the name of the file to append content
 * @text_content: This is the content to be appended
 *
 * Return: 1 on success and -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fc;
	int content;
	int perm;

	if (!filename)
		return (-1);

	fc = open(filename, O_WRONLY | O_APPEND);

		if (fc == -1)
			return (-1);

	if (text_content)
	{
		for (content = 0; text_content[content]; content++)
			;
		perm = write(fc, text_content, content);

		if (perm == -1)
			return (-1);
	}
	close(fc);

	return (1);
}
