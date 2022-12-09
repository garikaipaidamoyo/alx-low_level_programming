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
		i++;
	
		if (i == 'e' || i == 'q')
		{
			continue;
			putchar(i);	
		}

	}
	putchar('\n');
	return (0);
}
