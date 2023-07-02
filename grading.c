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
	int score = 30;

        /** Check if the score is between 
	 * 80 and 100 print the grade if true
	 */
	if (score >= 80 && score <= 100)
	{
		printf("A");
	}

	/** Check if the score is between
	 * 70 and 79 print the grade if true
	 */
	else if (score >= 70 && score <= 79)
	{
		printf("B");
	}
	/** Check if the score is between
	 * 65 and 69 print the grade if true
	 */
	else if (score >= 65 && score <= 69)
	{
		printf("C");
	}
	/** Check if the score is between
	 * 60 and 64 print the grade if true
	 */
	else if (score >= 60 && score <= 64)
	{
		printf("D");
	}
	/** Check if the score is between
	 * 50 and 59 print the grade if true
	 */
	else if (score >= 50 && score <= 59)
	{
		printf("D");
	}
	/** Check if the score is between
	 * 50 and 59 print the grade if true
	 */
	else if (score >= 0 && score <= 49)
	{
		printf("E");
	}
	else
	{
		printf("You enterd an invalid number");
	}
        
	return (0);
}
