#include "main.h"
/**
 * _islower - check for lower case chars
 *@c: to check if char is lower case
 * Return: 1 for lower case or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

