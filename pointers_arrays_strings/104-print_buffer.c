#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer to print
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int offset, i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (offset = 0; offset < size; offset += 10)
	{
		/* 1. Print the offset in hexadecimal (8 chars) */
		printf("%08x: ", offset);

		/* 2. Print hexadecimal content, 2 bytes at a time */
		for (i = 0; i < 10; i++)
		{
			if ((i + offset) >= size)
				printf("  ");
			else
				printf("%02x", b[offset + i]);

			if (i % 2 != 0)
				printf(" ");
		}

		/* 3. Print ASCII content or '.' for non-printable */
		for (i = 0; i < 10; i++)
		{
			if ((i + offset) >= size)
				break;

			if (b[offset + i] >= 32 && b[offset + i] <= 126)
				printf("%c", b[offset + i]);
			else
				printf(".");
		}
		printf("\n");
	}
}
