#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry level
 * Description: prints all possible combinations
 * of single-digit numbers
 * Return: Always 0 (pass)
 */
int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
		if (y != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
