#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char n = 'a';

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	while (n < 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
