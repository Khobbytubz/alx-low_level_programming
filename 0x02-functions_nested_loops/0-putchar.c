#include <unistd.h>
/**
 * Description:
 * _putchar - writes the character c to stdout
 * @c: the character to be print
 * 
 * Return: on pass 1
 * on error, return -1, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
