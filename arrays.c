#include <stdio.h>

/**
 * main- Arrays
 * Description: Prints two dimensional arrays
 * Return: 0 successful
 */

int main(void)
{
	int s;
	int a;
	int b[2][4] = { 
		{1, 2, 3, 4} , 
		{5, 6, 7, 8} 
	};
	for (s = 0; s < 2; s++)
	{
		for (a = 0; a < 4; a++)
		{
			printf("%d, %d = %d\n", s, a, b[s][a]);
		}
	}
	return (0);
}
      	
