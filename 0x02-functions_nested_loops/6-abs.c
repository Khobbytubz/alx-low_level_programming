#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: An integer to check
 * Return: absolute value of r.
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
