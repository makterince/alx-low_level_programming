#include "main.h"
/**
 *_pow_recursion - gives the power of y to x
 *@x: parameter
 *@y: parameter
 *Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y >= 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
