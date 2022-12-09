#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a', n = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);

}
