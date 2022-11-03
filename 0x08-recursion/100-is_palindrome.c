#include "main.h"

int _strlen_recursion(char *s);
int check_pali(char *s, int i);

/**
 *is_palindrome - check if words means same backwards
 *@s: parameter
 *Return: 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_pali(s, len - 1));
}

/**
 *_strlen_recursion - checks for string length
 *@s: parameter
 *Return: length
 *
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 *check_pali - checks if words means same backwards
 *@s: parameter
 *@i: parameter
 *Return: 0
 */
int check_pali(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}
	if (*s == *(s + i))
	{
		return (check_pali(s + 1, i - 2));
	}
	return (0);
}
