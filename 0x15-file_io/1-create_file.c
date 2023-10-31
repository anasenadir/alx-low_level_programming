#include "main.h"

/**
* _strlen - return the length of a string
* @str: the string
* Return: return the length of a string
*/
int _strlen(char *str)
{
	int len = 0;

	if (!str)
		return (0);

	while (*str++)
		len++;
	return (len);
}

/**
* create_file - Create a function that creates a file.
* @filename: the name of the file to create
* @text_content: is a NULL terminated string to write to the file
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fptr;
	ssize_t bytes, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fptr == -1)
		return (-1);

	if (len)
		bytes = write(fptr, text_content, len);
	close(fptr);
	return (bytes == len ? 1 : -1);
}
