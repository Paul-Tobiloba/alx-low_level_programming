#include <stdio.h>
#include "holberton.h"

/**
 * main: prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", *argv);

	return(0);
}

