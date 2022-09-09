#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**                                                                                                                   
 * main - Entry level                                                                          
 * Description: prints all the numbers of base 16 in lowercase
 * Return: always 0 (pass)
 */
int main(void)
{
	int y;
	char low;

	for (y = '0'; y <= '9'; y++)
		putchar(y);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
