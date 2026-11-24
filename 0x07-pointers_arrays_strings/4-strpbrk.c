#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any accepted character
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: pointer to first matching character, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
