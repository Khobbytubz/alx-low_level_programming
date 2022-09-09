#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry level
 * Description: prints the lowercase alphabet in reverse
 * Return: always 0 (pass)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
