#include "main.h"

/**
 * char *_strcpy - a function that copies a string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)

	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
