#include "main.h"
/**
 * print_alphabet_x10 - print the aalphabet 10 times
 *
 * Return: always 0 ( success)
 */
void print_alphabet_x10(void)
{
	int i;
	int k;

	for (k = 1; i <= 10; i++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
	return (0);
}
