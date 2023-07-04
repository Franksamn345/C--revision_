#include <stdio.h>
/**
 * main- Entry to the code
 * Description: Prints letters 'a' to 'z'
 * form top to bottom
 * Return: 0 successful
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		printf("%c", alph);
		if (alph < 'z')
		{
			printf(" , ");
		}
		 else if (alph = 'z')
		 {
			 printf(".\n");
		 }
	}
	return (0);
}
