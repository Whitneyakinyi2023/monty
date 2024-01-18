#include "monty.h"
/**
 * error_malloc: Function to handlee the error when malloc fails
 */
void malloc_error(void)
{
	fprintf(stderr," Error: Could not allocate memory\n");
	exit(EXIT_FAILURE);
}
