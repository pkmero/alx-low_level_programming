#include "main.h"
/**
 * _strlen_recursion - s function that returns
 * the length of a string
 *
 * @s: the string whose length is to be returned
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
