#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max) {
    if (min > max) {
        return NULL;
    }
    int size = max - min + 1;
    int *arr = malloc(sizeof(int) * size);
    if (arr == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = min + i;
    }
    return arr;
}
