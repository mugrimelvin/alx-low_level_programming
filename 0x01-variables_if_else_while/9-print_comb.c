#include <stdio.h>
#include <string.h>
/**
* main - Entrée
*
* Return: Always 0.
*/

int main(void)
{
	int num;
	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
