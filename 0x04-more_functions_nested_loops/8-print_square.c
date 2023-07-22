#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: is the size of the square
 * 
 * Desc: If size is 0 or less, 
 * the function should print only a new line
*/
void print_square(int size)
{
    if (size <= 0){
        _putchar('\n');
    }
    else{
        int row, col;

        for (row = 1; row <= size; row++)
        {
            for (col = 1; col <= size; col++)
                _putchar('#');
            _putchar('\n');
        }
    }
}