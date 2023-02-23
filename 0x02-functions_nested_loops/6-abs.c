#include "main.h"

/**
 * int_abs(in) - computes the absolute value of a integer
 * @c: The integer to be checked
 * Return: The absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
