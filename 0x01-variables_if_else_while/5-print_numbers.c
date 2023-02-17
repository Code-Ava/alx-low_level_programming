#include <stdio.h>

/**
 * main - entry point
 * description: print single digit and a new line
 * return: always o (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}

	printf('\n');

	return (0);
}
