#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;
	}
}
