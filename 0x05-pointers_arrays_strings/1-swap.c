#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: An integer to be swap
 * @b: An integer to be swap
 * Return: 0 always (pass)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
