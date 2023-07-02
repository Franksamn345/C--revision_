#include <stdio.h>

int main(void) {
	int person1 = 1;  // 1 represents Kenyan
	int person2 = 0;  // 0 represents American
	    //             
	printf("Before switching:\n");
	printf("Person 1: %s\n", person1 ? "Kenyan" : "American");
	printf("Person 2: %s\n", person2 ? "Kenyan" : "American");
	                             
	    //                                 // Switch the nationalities
	switch (person1) {
		case 0:
			person1 = 1;  // Change to Kenyan
			break;
		case 1:
			person1 = 0;
			break;
		default:
			printf("Invalid nationality for person 1\n");
			break;
	}


	switch (person2)  {
		case 0:  // Americ
			person2 = 1;
			break;
		case 1:  
			person2 = 0;  // Change to American
			break;
		default:
			printf("Invalid nationality for person 2\n");
			break;
	}
	
	printf("\nAfter switching:\n");
	printf("Person 1: %s\n", person1 ? "Kenyan" : "American");
	printf("Person 2: %s\n", person2 ? "Kenyan" : "American");
	return 0;
}
