#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to modify
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		/* If first character is lowercase, capitalize it */
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}

		/* Check if current char is lowercase */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/* Check if previous char was a separator */
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (s[i - 1] == sep[j])
				{
					s[i] -= 32;
					break;
				}
			}
		}
		i++;
	}

	return (s);
}
