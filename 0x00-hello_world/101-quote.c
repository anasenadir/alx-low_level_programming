/*
 * File: 101-quote.c
 */

#include <unistd.h>

/**
 * main - a simple program to print a message without using the printf or puts
 *
 * Return: Always 1 (Success)
 */
int main(void)
{	
    	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

    	return (1);
}
