#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: accepted characters
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i;
	int found;

	while (*s != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
