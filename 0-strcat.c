#include "main.h"

/**
 *_strcat - This function appends the src string
 * the dest string, overwriting the terminating null bytet
 *@dest: String
 *@src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
