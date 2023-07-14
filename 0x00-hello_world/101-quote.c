#include <unistd.h>
/**
 * main - a simple program to print a message without using the printf or puts
 *
 * Return: Always 1 (Success)
 */
int main(void)
{	
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    	write(2, message, sizeof(message));
    	return 1;
}
