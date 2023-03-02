#include "main.h"

/**
  * print_number - a function that prints any integer with putchar
  * @n: Number to be printed
  *
  * Return: Always 0
  */
void print_number(int n)
{
	int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
