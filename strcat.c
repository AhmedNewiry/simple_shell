#include "shell.h"


/**
 * _strcat- a function that conctatinates to strings
 * @dest: pointer to  the first string
 * @src: pointer to the second string
 * Return: pointer to the concatinated string
 */


char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	while (dest[i])
	{
		i++;
	}
	while ((dest[i] = src[x]))
	{
		i++;
		x++;
	}
	return (dest);
}
