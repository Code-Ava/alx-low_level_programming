#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int prev;
	prev = (nld % 10);

	if (prev < 0)
	{
		prev = (-1 * prev);
	}

	_putchar(prev + '0');
	return (prev);
}
