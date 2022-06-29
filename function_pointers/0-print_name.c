#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - will print the name that is passed
 * @name: the name to print
 * @f: pointer to the function to use
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL && name == NULL)
		return;
	f(name);
}
