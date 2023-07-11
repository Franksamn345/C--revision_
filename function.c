#include <stdio.h>
int sum(int one, int two);//Function declaration//prototype

int sum(int one, int two)//Function definition
{
	    int set;
	        set = one + two;
		    return (set);
}
int main(void)
{
	    int x = sum(7, 9);//Function call
	        printf("%d\n", (x * 2 + 48 ) / 2);
		    return 0;
}
