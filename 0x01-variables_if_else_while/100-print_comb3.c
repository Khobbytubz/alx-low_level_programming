#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry level
 * Description: prints all possible different
 * combinations of two digits
 * Return: always 0 (Pass)
 */
int main(void)
{
	int x, y;

	for (y  = '0'; y < '9'; y++)
	{
		for (x = y + 1; x <= '9'; x++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);

				if (x == '8' && y == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
