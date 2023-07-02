#include <stdio.h>
/**
 * main- Entry to the code
 * Description: A project for school grading system
 * 80 - 100 == A
 * 70 - 79 == B
 * 65 - 69 == C
 * 60 -64 == D
 * 50 - 59 == E
 * Below 50 == F
 * Return: 0
 */

int main(void)

{
	int score;

	printf("Type in your score: \n");
	scanf("%d", &score);
	/** Check if the score is between 
	 * 80 and 100 print the grade if true
	 */
	switch (score)
	{
		case 80 ... 100:
			printf("Your grade is A");
			break;
		case 70 ... 79:
			printf("Your grade is A-");
			break;
		case 65 ... 69:
			printf("Your grade is B+");
			break;
		case 60 ... 64:
			printf("Your grade is B");
			break;
		case 50 ... 59:
			printf("Your grade is B-");
			break;
		case 40 ... 49:
			printf("Your grade is C+");
			break;
		default:
			printf("You enterd an invalid number");
	}
	return (0);
}
