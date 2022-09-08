#include <stdio.h>

/**
 * main - program that prints the size of various types on the computer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of a int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
