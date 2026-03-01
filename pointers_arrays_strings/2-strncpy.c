#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copy characters from src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* If n is greater than src length, pad dest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
