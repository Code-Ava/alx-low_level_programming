#include "main.h"

/**
 * print-diagonal - printing diagonal lines
 * @n: input variable
 * Return: void
 */

void print-diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n: i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('_');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
