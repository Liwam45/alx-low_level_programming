#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - Prints name using pointer to function
 * @name: name to be printed
 * @f: pointer to function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
