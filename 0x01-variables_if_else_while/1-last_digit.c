#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int last_digit_of_n = n % 10;

	if(last_digit_of_n < 6 && last_digit_of_n != 0)
		printf("Last digit of %d is %d and is less then 6 ans not 0" , n , last_digit_of_n);
	else if(last_digit_of_n  > 5 )
		printf("Last digit of %d is %d and is grater then 5" , n , last_digit_of_n);
	else if(last_digit_of_n == 0)
		printf("Last digit of %d is %d and is 0" , n , last_digit_of_n);
	return (0);
}
