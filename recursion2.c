#include <stdio.h>

/**
 * main- Entry to the code
 * Description: prints numbers less
 * than 0 and then derement it
 * and a recursion occurs and the loop continues
 * until the condition of nuber is less than 0
 * is met
 */

void print(int nb)

{
	if (nb < 0) 
	{
		return;
	}
	printf("%d", nb);
	nb --;
	print(nb);
}

int main(void)
{
	print(4);
	return (0);
}
