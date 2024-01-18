#include "monty.h"

/**
 * free_value: free memory
 * @argc - count
 * @argv: vector
 * Description:free function
 * Return: 
 */
void free_value(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++) 
	{
		free(argv[i]);
	}
	argv[i] = (char *)malloc(strlen(argv[i]) + 1);
        if (argv[i] == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		free_value(i, argv);
            exit(EXIT_FAILURE);
	}
}
