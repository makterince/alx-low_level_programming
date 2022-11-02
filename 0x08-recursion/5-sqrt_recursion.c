#include "main.h"

int _sqrt(int, int);
/**
 *_sqrt_recursion - gets the original sqrt of n
 *@n: parameter
 *Return: sqrt
 *
 *
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - modified recusive function as original sqrt of n
 *@n: parameter
 *@i: parameter
 *Return: sqr
 */
int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq < n)
		return (-1);
	if (sq == n)
		return (i);
	return (_sqrt(n, i + 1));
}
