#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * 
 * Desc: If n is 0 or less, the function should only print a \n
*/
void print_diagonal(int n)
{
    if (n <= 0){
        _putchar('\n');
    }
    else{
        int row, col;

        for (row = 1; row <= n; row++)
        {
            for (col = 1; col < row; col++)
                _putchar(' ');
            _putchar('\\');
            _putchar('\n');
        }
    }
}