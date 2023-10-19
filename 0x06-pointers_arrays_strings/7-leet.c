#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
    int i, j;
    char chars[] = "aAeEoOtTlL";
    char leet_chars[] = "4433007711";

    for (i = 0; str[i]; i++)
    {
        for (j = 0; chars[j]; j++)
        {
            if (str[i] == chars[j])
            {
                str[i] = leet_chars[j];
                break;  /* Only one if used here to exit inner loop */
            }
        }
    }
    return (str);
}

