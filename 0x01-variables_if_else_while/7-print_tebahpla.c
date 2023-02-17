#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * description: prints lowercase alphabet in reverse
 * return: always 0 (success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	
	putchar('\n');	
	return (0);
}
