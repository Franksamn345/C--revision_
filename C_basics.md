# The header of the programm file should have ".c" to show that we are working with c programming language
## The header that contains the functions to be used in the code ".h" shows that it is a header...example - #include <stdio.h>
* <stdio.h> stands for standard input and output
* "file.h" this is a user header. Note that it should contain a double quote to show that it is a user header file.
### Indentation:
* In every programmig language the programmer should indent the code.
* In c we indent using the carli brackets {} 
#### The "int main()"... 
* the main function should be there in every c code as it holds the code in which the computer understands
##### Data types are used to assign the variables to a specific type for memory storage
* eg "int, char, float."
* Anytime u are declaring a variable u should assin a type to show the type of data to be expected.
* A semicolon is used to end a line, but not used on a function declaration ";"
##### Variable initialization
* eg ..."int samn;" this is variable declaration
* eg ..."samn = 12;" the variable **samn** has been innitialized to value "12"
* The "\n" means that the compiler should print a new line at the end of the code
###### To print the value to the output screen
* We use the "printf()" function to print the values inputed to the output screen
####### Conditionals and loops "(if, switch)"
* "if statement"- we use it in desicion making:
* example a grading  system of a school
* logical operator "AND &&", "OR ||"
#AND This means that both conditions are supposed to be true for the condition to work
#OR This means that either of the two conditions are supossed to be true for the condition to work
###### To make the code ask for the user input :
* We use the "scanf()" function. An ampersand sign is passed "&", for example: 
**scanf("%d", &score);**, the ampersand (&) sign is used in the scanf function to pass the address of the variable score as an argument.
* The scanf function is used to read input from the user. It takes two arguments: the format specifier indicating the type of input expected, and the address of the variable where the input should be stored.

In this case, the line scanf("%d", &score); is used to read an integer input from the user and store it in the variable "score". The ampersand (&) is used to get the address of the variable "score" so that **scanf** can modify its value directly.

By passing "&score", "scanf" knows where to store the inputted value. Without the ampersand, **scanf** wouldn't know the address of "score" and wouldn't be able to modify its value.
#### The "switch statement"
* This is also a condition statement
* when using switch the range of numbers is written as "70 ... 80"
* **Example are in the repo**
* when using the "switch" we are supposed to "break" after every condition to avoid the code from printing the rest from where the condition is met 
#### loops (for, while, do while)
* We use loops when we want a condition to go on until the condition is met else it should continue
* A loop counts the number of times the conddition shoud be repeated 
* That is why we should declare a variable for the loop which acts as a count
# In a loop there are three most important things that should be placed
1. There should be a starting value eg "variable age"
2. The second thing is the condition and this determines whether the loop will continue
3. Increment and decrement, for the loop to either increase the value or decrease it.
* The condition is stopped when the condition is met
##### (for, while loop)
* condition x < 10;
* initializing value x = x + 1; 
* Increment x++
##### for (x = 1; x <= 10; x++)
2. {
3.     /** line of code\n*\
4. }
* That is the basic structure of a for loop
##### While
1. initialize
2. while (condition)
3. {
4.     /* Increment/Decrement
5. }
* That is the basic structer of a while loop
* for a while loop to work u must have initialize a value
### Recursion
* Recursion is the repeat of a process before it comes to its completion 
* The function calls itself
#### Types of Recursion
1. Direct recursion
2. Indirect recursion
3. Tail recursion
4. Non-tail recursion
##### 1. Direct recursion
* A function is called direct recursive if it calls the same function again
###### Structures of Direct recursion:
1. func() {
2.	//some code
3. 	fun();
4.	//some code
5. }
##### 2. Indirect recursion
* A function(let say "func" is called indirect recursive if it calls another function(let say "func2") and then "func2" calls "func" directly or indirectly
###### Structures of Indirect recursion:
1. fun() {                    1. fun2() {
2. 	//some code           2. 	//some code    
3. fun();                     3. fun();
4. 	//some code           4. 	//some code
5. }                          5. }
##### Idea behind it 
1. Divide te problem into smaller sub-problems.
2. Specify the base condition to stop the recursion to prevent an "infinite loop"
* Example of use of recursion:
* Factorial of 5: 5 * 4 * 3 * 2 * 1 = 120;
##### The basic structure of a recursion program
1. Fact()
2. {
3. 	if( )
4. 	{
5. 		....} Base case.(2)-"Base condition is the one which doesn't require to call the same function again and it helps in stopping the recursion.like the smallest possible problemi
6. 	}
7. 	else
8. 	{
9. 		....} Recursive procedure.(1)
10. 	}
11. }
#### Functions
* This are action words for performing a certain function
* Predefined functions are the ones that are already programmed in the computer and the computer understands it as long as it sees it
* Defining a function is to write what the function entails
* Declaring a function is to wrie a declaration of the function, and it is done at the top"writing the prototype of the function so it can be used in other functions
 
1. Defination :
              *(Recursive "when the function is called in the definition ")
2. Declaration
3. Calling of the function
i) Example
* The "rm -r"- recursion function for deleting files:  "rm -r"
* {
* 	conditoin()
*		{
*			if it is a directory/file
*					{
*						if file or directory is empty
*					}
*	Terminating_condition(This is the "Base case")
* }
##### Header files
* They contain prototypes used to call certain functions to be used in a code.
* The prototypes are the function declarations held by the header file which are introduced to the peice of code by including a "header file"
##### How to call a function
1. First define the function and what the code of the function is about
2. Second declare the prototype mostly at the top of the code after the header files, so that it can be reused in other functions without repeating the declaration
3. declare a variable in the required function and assign it the function call.. eg. "int x = sum(78, 90);"
##### Pointers
* Incremetion when the "++"sign comes before the variable "pre-decrement" then 1 is added to the variable, and the value of the variable is changed. 
. Example:
1. /**
2.  * int sam = 5;
3.  * int so = ++sam;//By placing increment sign before the variebles, the value of "sam" is changed as 1 is added to it.
4.  */
. Example 2:
1. /**
2.  * int sam = 5;
3.  * int so = sam++;//By placing increment sign after the variable, the value of sam still remains the same as in this the "=" operator is first executed then followed with the increment.
4.  */

##### Dynamic memory allocation
1. Functions that allocat are:
            /*malloc, calloc, realloc*/
2. Function that deallocates memory
            /*free*/
##### malloc)
* void* malloc(sizeof(size)); 
