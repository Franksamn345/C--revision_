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
* when using switch the range of numbers is written as "70..80"
* **Example are in the repo** 
