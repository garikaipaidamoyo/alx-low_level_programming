#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 0; n = 'a';

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	while (n < 'g')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
