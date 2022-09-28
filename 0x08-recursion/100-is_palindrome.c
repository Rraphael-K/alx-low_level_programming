#include "main.h"
#include <stdio.h>

int palid(char *s, int len);
/**
 * _strlen_recursion - Return lengthof string
 * @s: Calculate length
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * is_palidrome - Checks if s is a palidrome string
 * @s: String Input
 *
 * Return: 1 if string is palidrome or 0
 */
int is_palidrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);

	return (palid(s, len));
}

/**
 * palid - Reverse string
 * @s: String Input
 * @len: Length of s
 *
 * Return: Reverse string
 */
int palid(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (palid(s + 1, len - 2));
	}
	else
		return (0);
}
