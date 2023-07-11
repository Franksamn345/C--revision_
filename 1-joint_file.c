#include "main.h"
#include <stdio.h>
#include <stdio.h>
/* odd- Entry to the code */
/* Description: A program that adds 1 to odd numbers between 1 and 10 */
/* Return: m success */
//Function defination
int odd(int m)
{
	if (m % 2 == 1)
	{
		m += 1;
	}
//	else
//	{
//		m -= 1;
//	}
	return m;
}


// substracts 1 from even numbers from 1 to 10 then prints them
int even(int n)
{
	if (n % 2 == 0)
	{
		n -= 1;
	}
//	else
//	{
//		n += 1;
//	}
	return n;
}
int main(void)
{
	int num = 1;

	for(; num <= 10; num++)
	{
		odd(num);
		printf("%d\n`", odd(num));

		even(num);
		printf("%d\n", even(num));
	}
	return (0);
}
