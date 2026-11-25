#include <stdio.h>
#include "function_pointers.h"
/*
 * void print_name - print a name
 * @name: name of the person
 *
 * return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
