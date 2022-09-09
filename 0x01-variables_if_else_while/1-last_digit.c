#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry level
 * Description: print the last digit of the number stored
 * in the variable n
 * Return: always 0 (pass)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

		if (i > 5)
			printf("Last digit is %d is %d and is greater than 5\n", n, i);
		else if (i == 0)
			printf("Last digit of %d is %d and is 0\n", n, i);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);

	return (0);
}
