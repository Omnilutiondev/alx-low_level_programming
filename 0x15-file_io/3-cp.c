#include "main.h"
#include <stdio.h>

/**
 * error_file - This function checks if a file is opened
 * and handles the errors generated
 *
 * @file_from: This is the initial file to check and copy
 * @file_to: This the destination file to copy to
 * @argv: This is the argument vector
 *
 * Return: Nothing
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - This function copies contents of a file
 * from one to another
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, fail_close;
	ssize_t nbchar, nfc;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nbchar = 1024;
	while (nbchar == 1024)
		{
			nbchar = read(file_from, buff, 1024);
			if (nbchar == -1)
				error_file(-1, 0, argv);
			nfc = write(file_to, buff, 1024);
			if (nfc == -1)
			error_file(0, -1, argv);
		}

	fail_close = close(file_from);
	if (fail_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fc %d\n", file_from);
		exit(100);
	}
	fail_close = close(file_to);
	{
		dprintf(STDERR_FILENO, "Error: Can't close fc %d\n", file_to);
		exit(100);
	}

	return (0);
}
