#include "main.h"
/**
 * _strlen_recursion - Return length of string
 * @s: String Input
 *
 * Return: Length of String
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
