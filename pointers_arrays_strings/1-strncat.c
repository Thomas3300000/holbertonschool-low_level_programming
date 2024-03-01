#include "main.h"

/**
 * *_strncat -  function that concatenates two strings
 * will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: string destination
 * @src: string source
 * @n: octet checked
 *
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a]; a++)
	{
	}
	for (b = 0; src[b] && b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}


	return (dest);
}
