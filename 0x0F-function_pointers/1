#include "3-calc.h"
/**
 * main - Entry point
 * @argc: the number of the parameters
 * @argv: the parameters in the case the number to be calculated.
(* a blank line
* Description: this program is the enttry point for a calculator)?
(* section header: 3-calc.h)*
* Return: 0 in success
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fun_ptr = get_op_func(argv[2]);

	if (fun_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = fun_ptr(num1, num2);

	printf("%d\n", result);
	return (0);
}
