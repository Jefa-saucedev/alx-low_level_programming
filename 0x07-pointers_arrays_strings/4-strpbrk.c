#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; i < *s; s++)
	{
		for (j = 0; j < accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	}
	return ('\0');
}
