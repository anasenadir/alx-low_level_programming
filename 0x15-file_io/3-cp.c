#include "main.h"

#define F_PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define NOREAD "Error: Can't read from file %s\n"
#define NOWRITE "Error: Can't write to %s\n"
#define USAGE "Usage: cp file_from file_to\n"
#define NOCLOSE "Error: Can't close fd %d\n"

/**
* main - copy the contect of a file to another
* @argc: the args count
* @argv: the args valus
* Return: 1 on success 0 on failure
*/
int main(int argc, char **argv)
{
	int from_ptr = 0, to_ptr = 0;
	ssize_t bytes = 0;
	char *file_from_name, *file_to_name, buffer[READ_BUF_SIZE];

	file_from_name = argv[1];
	file_to_name = argv[2];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	from_ptr = open(file_from_name, O_RDONLY);
	if (from_ptr == -1)
		dprintf(STDERR_FILENO, NOREAD, file_from_name), exit(98);

	to_ptr = open(file_to_name, O_CREAT | O_WRONLY, F_PERMISSIONS);
	if (to_ptr == -1)
		dprintf(STDERR_FILENO, NOWRITE, file_to_name), exit(99);

	while ((bytes = read(from_ptr, &buffer[0], READ_BUF_SIZE)))
		if (write(to_ptr, &buffer[0], bytes) != bytes)
			dprintf(STDERR_FILENO, NOWRITE, file_to_name), exit(99);

	if (bytes == -1)
		dprintf(STDERR_FILENO, NOREAD, file_from_name), exit(98);

	from_ptr = close(from_ptr);
	to_ptr = close(to_ptr);
	if (!from_ptr)
		dprintf(STDERR_FILENO, NOCLOSE, from_ptr), exit(100);
	if (!to_ptr)
		dprintf(STDERR_FILENO, NOCLOSE, to_ptr), exit(100);

	return (EXIT_SUCCESS);
}
