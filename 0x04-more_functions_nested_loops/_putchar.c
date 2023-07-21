#include <unistd.h>
#include <main.h>

/**
 * putchar - write the char c
 * @c: the character to print
 * 
 * Return: 1 on Success
 *      0 on Error
*/
int _putchar(char c)
{
        return (write(1 , &c , 1));
}
