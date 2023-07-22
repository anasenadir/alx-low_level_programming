#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * 
 * Description: If size is 0 or less, the function should print only a new line
*/
void print_triangle(int size)
{
    if (size <= 0){
        _putchar('\n');
    }
    else{
        int row, col;

        for(row = 1; row <= size; row++)
        {
            for (col = 1; col <= size; col++)
            {
                if(col + row >= size){
                    _putchar('#');
                    continue;
                }
                _putchar(' ');
            }
            _putchar('\n');
        }
    }
}