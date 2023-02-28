#include "main.h"
/**
 * _puts - print a string followed by a new line to stndout
 * @str: char to be checked
 * Return:length of string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putschar(str[a]);
		a++;
	}
	_putchar('\n');
}
