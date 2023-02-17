#include <stdio.h>
#include <unistd.h>

/**
 * main -entry point
 * description: prints the alphabet in lowercase then uppercase \n
 * return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
