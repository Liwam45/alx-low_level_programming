#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string
 * @str: output
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
