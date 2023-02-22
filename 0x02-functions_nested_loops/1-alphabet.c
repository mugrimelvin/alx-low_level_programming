#include <main.h>

/**
 * main - Prints alphabet is lowercase
 * Return: Always (Success)
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
