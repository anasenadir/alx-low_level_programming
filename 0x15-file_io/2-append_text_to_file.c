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
* append_text_to_file - function that appends text at the end of a file.
* @filename: the name of the file to create
* @text_content: is the NULL terminated string to add at
* the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fptr;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fptr = open(filename, O_WRONLY | O_APPEND);
	if (fptr == -1)
		return (-1);

	if (len)
	{
		bytes = write(fptr, text_content, len);
	}

	close(fptr);
	return (bytes == len ? 1 : -1);
}
