#include"main.h"
/**
 * print_alphabet_x10 - print the aalphabet 10 times
 *
 * Return: always 0 ( success)
 */
void print_alphabet_x10(void)
{
	int i;
	int k;

	for (k = 0; i <= 9; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
