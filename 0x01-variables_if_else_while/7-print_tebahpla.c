#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse
 * Return: Always 0 (success)
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
