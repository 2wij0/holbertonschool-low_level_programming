#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to add
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* 1. Find the end of the dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* 2. Copy src into dest, starting at dest's null byte */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* 3. Add the final null byte */
	dest[i] = '\0';

	return (dest);
}
