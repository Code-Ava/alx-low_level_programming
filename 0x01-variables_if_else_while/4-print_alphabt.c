#include <stdio.h>

/**
 * main - entry point
 * description: prints lowercase alphabets except q and e
 * return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');
	return (0);
}
