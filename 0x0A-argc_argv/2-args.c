#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		printf("%s\n", *argv++);
	return (0);
}
