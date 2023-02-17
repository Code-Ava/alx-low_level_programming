#include <stdio.h>

/**
 * main - entry point
 * description: print single digits
 * return: always 0 (success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	
	return (0)
}
