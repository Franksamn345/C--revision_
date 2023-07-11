#include <stdio.h>

int mul(int a, int b, int c)
{
	int multi;
	multi = (a * b) * c;
	return (multi);
}

int main(void)
{
	int x = mul(78, 36, 30);
	printf("The multiplication of 78, 36 and 30 is: %d\n", x);
	return (0);
}

