#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: string to be appended to
 * @src: string to add
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* 1. Find the end of the dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* 2. Copy src into dest, stopping at null OR n bytes */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* 3. Always add the terminating null byte */
	dest[i] = '\0';

	return (dest);
}
