#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: The character to print
 * Return: On succes 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int_putchar(char c)
{
        return(write(1, &c, 1));
}