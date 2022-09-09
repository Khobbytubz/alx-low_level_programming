#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0  (pass)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low ='A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
