#include <stdio.h>

/**
 * main - entry point
 * description: print all the numbers in base 16
 * return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
