#include <stdio.h>

/**
 * main- Entry to the code
 * Description: Prints 'a' to 'z' backwards
 * Return: 0 success
 */

int main(void)
{
	char alph;
	alph = 'z';

	while (alph >= 'a')
	{
		if (alph != 'a')
		{
			printf(", ");
		}
		printf("%c ", alph);

		alph--;
	}
	return (0);
}
