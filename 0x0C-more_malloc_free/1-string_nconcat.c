#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: a pointer to a allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1, s2, s3, i = 0;
    char *a;

    s1 = strlen(str1);
    s2 = strlen(str2);
    s3 = s1 + s2 + 1;

    a = char *malloc(sizeof(unsigned int)n * s3);

    for(i = 0; i < s1; i++)
        a[i] = str1[i];

    for(i = 0; i < s2; i++)
        a[i+s1] = str2[i];

    a[i]='\0';

    return a;
}
