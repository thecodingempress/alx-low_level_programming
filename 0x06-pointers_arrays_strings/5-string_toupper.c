#include "main.h"
/**
 * string_toupper - changes lowercase letters
 *  to uppercase
 *  @s: string
 *
 *  Return: pointer to new string
 */
char *string_toupper(char *s)
{
	int i;

	while (*s != '\0')
	{
		i = *s;

		if ( i >= 97 && i < 123)
		{
			i = i + 36;
		}
		s++;
	}
	return (s);
}
