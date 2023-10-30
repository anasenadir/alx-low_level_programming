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
	int fptr;
	char buffer[BUFFER_SIZE * 8];
	ssize_t bytes;

	if (!filename || !letters)
		return (0);
	
	fptr = open(filename, O_RDONLY);

	if (fptr == -1)
		return (0);

	bytes = read(fptr, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	close(fptr);
	return (bytes);
}
