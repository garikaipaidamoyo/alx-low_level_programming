#include "main.h"

/**
 * _strchr - set memory function
 * @c: Character type
 * @s: pointer to array
 *
 * Return: s 
 */

char *_strchr(char *s, char c)
{
	while(s[0] != '\0')
	{
		if(s[0] == c)
			return(s);
		else lf (s[1] == c)
			return(s + 1);
		s++;
	}
		return(s + 1);
}
