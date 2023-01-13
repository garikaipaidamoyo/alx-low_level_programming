#include "main.h"
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc - number of arguments
 * @argv - array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
