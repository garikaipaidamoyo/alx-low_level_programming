#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a', n = 'A';

	while (i <= 'z' || n <= 'Z')
	{
		putchar(i);
		putchar(n);
		i++;
		n++;
	}
	putchar('\n');
	return (0);

}
