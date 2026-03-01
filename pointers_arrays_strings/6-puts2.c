#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		/* Check if the next character exists before skipping */
		if (str[i] != '\0')
		{
			i++;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
