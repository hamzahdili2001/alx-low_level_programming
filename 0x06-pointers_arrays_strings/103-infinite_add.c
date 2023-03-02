
/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result can't be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry = 0;
	int len1 = 0, len2 = 0, sum = 0;
	char temp;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 ||
	j >= 0 || carry; i--, j--, k++)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		r[k] = sum % 10 + '0';
		carry = sum / 10;
	}

	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}
