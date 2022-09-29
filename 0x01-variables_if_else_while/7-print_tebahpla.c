#include <stdio.h>

/**
 * main - Prints alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar (alph);
	}
	putchar('\n');

	return (0);
}
