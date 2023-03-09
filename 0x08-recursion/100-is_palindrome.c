#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @len: position
 * Return: boolena
 */
int p1(char *s, int len)
{
	/* an empty string is a palindrome */
	if (len < 1)
	{
		return (1);
	}

	/* compare char with the char of the reversed string */
	if (*s == *(s + (len - 1)))
	{
		/* keep comparing, till string is empty */
		return (p1(s + 1, len - 2));
	}
	/* if both chars aren't equal, it is not a palindrome */
	return (0);
}

/**
 * is_palindrome - checks if a number is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len));
}
