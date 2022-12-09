#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
