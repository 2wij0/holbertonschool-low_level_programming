#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number string
 * @n2: second number string
 * @r: buffer to store result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if buffer is too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, sum, carry = 0;
	int len1 = 0, len2 = 0;

	/* Find lengths of input strings */
	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	/* Check if result + null terminator can fit in buffer */
	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;

	/* Add digits from right to left */
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		if (k >= size_r - 1)
			return (0);

		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	r[k] = '\0';

	/* Reverse the result string in buffer r */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}
