#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: parameter
Return: len*
 *
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(++s);
	}
	else
		return (len);

}
