#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w = '0';

	while (w <= '10')
	{
		putchar (w);
		w++;

		if (w != '9')
		{
			putchar (' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
