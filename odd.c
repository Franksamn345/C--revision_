#include <stdio.h>
/**
 * odd- This function adds 1 to odd numbers
 * Return: 'm' success
 */

int odd(int n)
{

	if (n % 2 == 1)
	{
		n += 1;
	}
	else
	{
		n -= 1;
	}
	return (n);
}
