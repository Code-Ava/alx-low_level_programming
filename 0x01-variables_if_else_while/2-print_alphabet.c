#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * description: prints the alphabet in lowercase\n
 * return: Always return 0 (success)
 */
int main(void)
{
	int ch

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}	
