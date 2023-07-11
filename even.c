#include <stdio.h>

/**
 * even- Subtracts 1 from even numbers
 * @a: character to be returned
 * Return: 'a' success
 */

int even(int a)
{
	if (a % 2 == 0)
	{
		a -= 1;
	}
	else
	{
		a += 1;
	}
	return (a);
}
