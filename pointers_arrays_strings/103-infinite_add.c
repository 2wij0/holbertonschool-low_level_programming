#include "main.h"

/**
 * rev_string - reverses a string
 * @n: the string to reverse
 */
void rev_string(char *n)
{
	int i = 0, j = 0;
	char temp;

	while (n[j] != '\0')
		j++;
	j--;

	for (i = 0; i < j; i++, j--)
	{
		temp = n[i];
		n[i] = n[j];
		n[j] = temp;
	}
}

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

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
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
	rev_string(r);
	return (r);
}
