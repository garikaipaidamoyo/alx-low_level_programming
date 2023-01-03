#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: Character
 * @s: String
 *
 * Return: a pointer to the first occurrence of char c in the string s
 * Null if the character is not found
 */

char *_strchr(char *s, char c)
{
	while(*s != '\0')
	{
		if(*s == c)
			return(s);
		else lf (*(s + 1) == c)
			return(s + 1);
		s++;
	}
		return(s + 1);
}
