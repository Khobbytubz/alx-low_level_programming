#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry level
 * Description:  program that prints the alphabet in lowercase
 * Return: always 0 (pass)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
