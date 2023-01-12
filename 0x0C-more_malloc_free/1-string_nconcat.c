#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to  newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
    int len1 = s1 ? strlen(s1) : 0;
    int len2 = s2 ? strlen(s2) : 0;
    if (n >= len2) {
        n = len2;
    }
    char *result = malloc(len1 + n + 1);
    if (result == NULL) {
        return NULL;
    }
    if (s1) {
        strcpy(result, s1);
    } else {
        result[0] = '\0';
    }
    strncat(result, s2, n);
    return result;
}

