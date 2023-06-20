#include "main.h"
/**
 * _isalpha - check for alphabetic chars
 * @c: the char to be checked
 * Return: 1 for alpha 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
