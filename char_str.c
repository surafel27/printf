#include "main.h"
#include <stdlib.h>

/**
 * char_str - converts character to string
 * @ap: list of the argument
 * Return: string
 */

char *char_str(va_list ap)
{
	char c; /* @c: character to be converted */
	char *s;

	c = va_arg(ap, int);

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = 1;
	return (s);
}
