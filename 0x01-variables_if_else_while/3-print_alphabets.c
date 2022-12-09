#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a'; i = 'A';

	while (i <= 'z' && i <= 'Z')
	{
		putchar(i);
		i++;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
