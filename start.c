#include "monty.h"
/**
 * start_c: functionto initialize pointer
 * args structure.
 */
void start_c()
{
	value =  malloc(sizeof(arg_s));
	if (value == NULL)
		error_malloc();
	
	value->connect = NULL;
	value->command = NULL;
}
