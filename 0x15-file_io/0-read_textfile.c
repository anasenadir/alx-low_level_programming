#include "main.h"


/**
* read_textfile - reads a text file and prints it to
* the POSIX standard output.
* @filename: the file name
* @letters: is the number of letters it should read and print
*Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *buffer;
	ssize_t reads_count, check_write;

	fptr = open(filename, O_RDONLY);

	if (fptr  == NULL || filename == NULL || !letters)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		fclose(fptr);
		return (0);
	}

	reads_count = read(buffer, letters, fptr);

	check_write = write(STDOUT_FILENO, buffer, reads_count);

	if (check_write < 0 || check_write != reads_count)
	{
		free(buffer);
		fclose(fptr);
		return (0);
	}

	fclose(fptr);
	return (reads_count);
}
