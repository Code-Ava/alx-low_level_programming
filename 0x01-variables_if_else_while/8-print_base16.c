#include <stdio.h>

/**
 * main - entry point
 * description: print all the numbers in base 16
 * return: always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
		putchar(a);
	for (a = 'i'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
