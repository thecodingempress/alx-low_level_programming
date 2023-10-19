#include "main.h"

/**
 * is_separator - checks if character is a separator
 * @c: character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i]; i++)
    {
        if (c == separators[i])
            return (1);
    }
    return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
    {
        if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 'a' + 'A';
        }
        if (is_separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
        {
            str[i + 1] = str[i + 1] - 'a' + 'A';
        }
    }
    return (str);
}

