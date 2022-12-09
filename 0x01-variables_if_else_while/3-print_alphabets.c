#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a'; n = 'A';

	while (i <= 'z' && n <= 'Z')
	{
		putchar(i);
		i++;
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);

}
