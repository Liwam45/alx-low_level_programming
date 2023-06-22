#include "main.h"


/**
 * _isdigit - Check if numbers are 0 - 9 
 * @x: The number to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int x)

{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	return (0);
}
