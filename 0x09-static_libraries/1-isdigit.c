#include "main.h"
/**
 *_isdigit - to find out if c is a digit or undercover alphabet
 *Return: 1 if digit 0 if not
 *@c: integer under interogation
 *
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
