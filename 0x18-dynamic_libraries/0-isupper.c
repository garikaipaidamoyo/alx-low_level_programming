#include "main.h"

/**
 * _isupper - checks for uppercase integers
 * @c: The integer prints
 *
 * Return: 1 if c is uppercase,otherwise return 0
 */
int _isupper(int c)
{
        if ((c >= 'A') && (c <= 'Z'))
        {
                return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}
