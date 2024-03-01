#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest
 *  @dest: buffer to copy
 *  @src: copie the string
 *
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int cpt = 0;

	while (src[cpt])
	{
		dest[cpt] = src[cpt];
		cpt++;
	}

	return (dest);

	dest[cpt++] = '\0';
}
