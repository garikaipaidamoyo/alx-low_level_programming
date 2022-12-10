#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w;

	for (w = '0'; w <= '9'; w++)
	{
		putchar (w);
		if (w != '9')
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
