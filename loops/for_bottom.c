#include <stdio.h>
/**
 * main- Entry to the code
 * Description: Prints 'a' to 'z'
 * in reverse
 * Return: 0 success
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		if (alph >= 'a' && alph != 'z')
		{
			printf(", ");
		}
		printf("%c ", alph);
	}
	printf("\n");

	return (0);
}
