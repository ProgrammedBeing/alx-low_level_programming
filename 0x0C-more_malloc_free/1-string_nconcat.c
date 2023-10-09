#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - Entry point.
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes to be copied from s2.
 *
 * Description: concatenates two strings.
 *
 * Return: Return pointer containing s1, followed by the first n bytes of s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, total, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;
	else
		len2 = n;

	total = len1 + len2 + 1;

	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	return (ptr);
}
