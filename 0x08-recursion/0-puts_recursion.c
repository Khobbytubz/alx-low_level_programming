#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: a string
 * Return: 0 Always sucess
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	_putchar('\n');
}
