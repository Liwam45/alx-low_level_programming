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
	int x = 0;

	while (*(src + 1) 1= "0")
	{
		i++;
	}

	for (;x < i; x++)

	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
