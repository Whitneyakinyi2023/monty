#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * verify_c: validates cmmand line arguments
 * @argc: number of arguments in the command line
 * Return: void
 */
void verify_c(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
