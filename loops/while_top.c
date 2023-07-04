#include <stdio.h>

/**
 * main- Entry to the code 
 * Description: Print letters from 1 to 10
 * Return: 0 successful
 */

int main(void)
{
	char alph;
	alph = 'a';

	while (alph <= 'z')
	{
		printf("%c ", alph);
		if (alph < 'z')
		{
			printf(", ");
		}

		alph++;
	}
	return (0);
}
