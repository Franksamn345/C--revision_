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
# Header files
* They contain prototypes used to call certain functions to be used in a code.
* The prototypes are the function declarations held by the header file which are introduced to the peice of code by including a "header file"
## Standard Library Header files
###  <string.h>
1. strcpy: Copies one string to another.

 {
    /* char *strcpy(char *dest, const char *src); */
 }
* Use: This function is used to copy the contents of the source string (src) to the destination string (dest).

2. strcat: Concatenates two strings.

1. {
2.   /* char *strcat(char *dest, const char *src); */
3. }
* Use: It appends the contents of the source string (src) to the destination string (dest), resulting in a single concatenated string.

3. strlen: Calculates the length of a string.

1. { /* size_t strlen(const char *str);*/ }
* Use: This function returns the length of the string (str), excluding the null terminator.

4. strcmp: Compares two strings.

* { /* int strcmp(const char *str1, const char *str2); */ }
* Use: It compares the two strings (str1 and str2) and returns an integer value indicating their relationship (equal, greater than, or less than).

5. strncmp: Compares the first n characters of two strings.

* { /* int strncmp(const char *str1, const char *str2, size_t n); */ }
Use: Similar to strcmp, but it compares only the first n characters of the strings.

6. strstr: Finds the first occurrence of a substring in a string.

* { /* char *strstr(const char *str1, const char *str2); */ }
* Use: It searches for the first occurrence of str2 within str1 and returns a pointer to the first character of the found substring, or NULL if not found.

7. strtok: Tokenizes a string based on delimiters.

 { /* char *strtok(char *str, const char *delim); */ }
* Use: It breaks the input string (str) into a series of tokens based on the provided delimiters (delim), returning each token one at a time.

8. memcpy: Copies a block of memory.

{ /* void *memcpy(void *dest, const void *src, size_t n); */ }
* Use: This function copies n bytes of memory from the source address (src) to the destination address (dest).
### <stdio.h> header file in C provides functions for input and output operations. Here are some commonly used functions and their uses:
1. printf: Prints formatted output to the standard output stream.

 { /* int printf(const char *format, ...); */ }
* Use: It formats and prints the specified arguments (...) based on the provided format string (format) to the standard output.

2. scanf: Reads formatted input from the standard input stream.

 { /*int scanf(const char *format, ...); */ }
* Use: It reads input from the standard input based on the specified format string (format) and stores the values in the provided arguments (...).

3. fgets: Reads a line of text from a file or input stream.

 { /* char *fgets(char *str, int n, FILE *stream); */ }
* Use: It reads at most n-1 characters from the specified input stream (stream) and stores them in the string (str). It stops reading after encountering a newline or the end of the file.

4. fopen: Opens a file.

  { /* FILE *fopen(const char *filename, const char *mode); */ }
* Use: It opens a file with the specified filename in the specified mode (e.g., "r" for read, "w" for write) and returns a file pointer (FILE*) that can be used for further file operations.

5. fclose: Closes a file.

* /* int fclose(FILE *stream); */
* Use: It closes the specified file stream (stream), releasing any associated resources and flushing any buffered data.

6. fprintf: Prints formatted output to a file.

* /* int fprintf(FILE *stream, const char *format, ...); */
* Use: It formats and prints the specified arguments (...) based on the provided format string (format) to the specified output file stream (stream).

7. fscanf: Reads formatted input from a file.

* /* int fscanf(FILE *stream, const char *format, ...); */
* Use: It reads input from the specified input file stream (stream) based on the specified format string (format) and stores the values in the provided arguments (...).
### <stdlib.h> header file in C provides functions for general-purpose utility and memory management. Here are some commonly used functions and their uses:
1. malloc: Allocates memory dynamically.

* /* void *malloc(size_t size); */
* Use: It dynamically allocates a block of memory of the specified size in bytes and returns a pointer to the allocated memory.

2. free: Deallocates memory previously allocated by malloc.

* /* void free(void *ptr); */
* Use: It releases the memory block pointed to by ptr, which was previously allocated by functions like malloc, calloc, or realloc.

3. calloc: Allocates and initializes memory for an array.

* /* void *calloc(size_t num, size_t size); */
* Use: It allocates a block of memory for an array of num elements, each of size bytes, and initializes all the bytes to zero.

4. realloc: Reallocates memory block.

* /* void *realloc(void *ptr, size_t size); */
* Use: It changes the size of the memory block pointed to by ptr to the specified size, preserving the existing data. It may move the block to a different location if necessary.

5. atoi: Converts a string to an integer.

* /* int atoi(const char *str); */
* Use: It converts the string str to an integer representation and returns the converted value.

6. rand: Generates a pseudo-random number.

* /* int rand(void); */
* Use: It generates a pseudo-random integer within a range determined by the implementation.

7. srand: Seeds the random number generator.

* /* void srand(unsigned int seed); */
* Use: It initializes the random number generator with the specified seed value. Calling srand with the same seed value will produce the same sequence of random numbers.

8. exit: Terminates the program.

* /* void exit(int status); */
* Use: It terminates the program with the specified status code. It's typically used to indicate the exit status or abnormal termination of the program.
### <math.h> Here are some commonly used functions and macros provided by the <math.h> header file in C, along with their uses:
1. Trigonometric Functions:

*    sin: Calculates the sine of an angle in radians.
*    cos: Calculates the cosine of an angle in radians.
*    tan: Calculates the tangent of an angle in radians.
*    asin: Calculates the arcsine (inverse sine) of a value, returning the result in radians.
*    acos: Calculates the arccosine (inverse cosine) of a value, returning the result in radians.
*    atan: Calculates the arctangent (inverse tangent) of a value, returning the result in radians.
2. Exponential and Logarithmic Functions:

*    exp: Calculates the exponential value of a given number.
*    log: Calculates the natural logarithm (base e) of a number.
*    log10: Calculates the base-10 logarithm of a number.
*    pow: Calculates the result of raising a number to a specified power.
*    sqrt: Calculates the square root of a number.
3.   Rounding and Absolute Value Functions:

*    ceil: Rounds a floating-point value to the next highest integer.
*    floor: Rounds a floating-point value to the next lowest integer.
*    round: Rounds a floating-point value to the nearest integer.
*    fabs: Returns the absolute value (magnitude) of a floating-point number.
4. Miscellaneous Mathematical Functions:

*    fmod: Calculates the remainder after division of one number by another.
*    fmin: Returns the minimum value among two floating-point numbers.
*    fmax: Returns the maximum value among two floating-point numbers.
*    hypot: Calculates the length of the hypotenuse given the lengths of two perpendicular sides.
5. Mathematical Constants:

*    M_PI: Represents the mathematical constant pi (π).
*    M_E: Represents the mathematical constant e.
######These functions and macros provide a wide range of mathematical calculations, including trigonometry, exponentiation, logarithms, rounding, absolute value, and more. They are useful for performing various mathematical operations in C programming
## System header files
### <unistd.h> header file in C provides access to various system calls and constants related to POSIX operating systems. Here are some commonly used functions and constants provided by <unistd.h> and their uses:
1. File I/O Functions:

* read: Reads data from a file descriptor.
* write: Writes data to a file descriptor.
* open: Opens a file or device.
* close: Closes a file descriptor.
* lseek: Changes the file offset of an open file.
* unlink: Deletes a name from the file system.
2. Process Control Functions:

* fork: Creates a new process by duplicating the existing process.
* exec: Replaces the current process image with a new process image.
* exit: Terminates the calling process.
* wait: Suspends execution of the calling process until one of its child processes terminates.
3. System Information Functions:

* getpid: Returns the process ID of the calling process.
* getppid: Returns the parent process ID of the calling process.
* getuid: Returns the user ID of the calling process.
* getgid: Returns the group ID of the calling process.
* gethostname: Gets the name of the host the program is running on.
4. Miscellaneous Functions:

* sleep: Suspends execution for a specified number of seconds.
* usleep: Suspends execution for a specified number of microseconds.
* getcwd: Gets the current working directory.
* chdir: Changes the current working directory.
* pipe: Creates a pipe for interprocess communication.
5. Constants:

* STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO: File descriptors for standard input, standard output, and standard error, respectively.
* F_OK, R_OK, W_OK, X_OK: File access mode constants for access function.

###### These are some of the commonly used functions and constants provided by <unistd.h>. They allow you to perform operations related to file I/O, process control, system information, and other system-level functionalities. Please note that the availability of certain functions and constants may depend on the specific operating system and its compliance with POSIX standards.
### <time.h> header file in C provides functions and types for working with date and time values. Here are some commonly used functions and types provided by <time.h> and their uses:
1. time: Retrieves the current calendar time.

* /* time_t time(time_t *timer); */
* Use: It returns the current time as the number of seconds elapsed since the Unix epoch (January 1, 1970). The result is stored in the timer parameter if provided.

2. localtime: Converts a time_t value to a local time representation.

* /* struct tm *localtime(const time_t *timer); */
* Use: It converts the time_t value to a structure (struct tm) representing the local time. The structure contains members for year, month, day, hour, minute, second, etc.

3. gmtime: Converts a time_t value to a UTC (GMT) time representation.

* /* struct tm *gmtime(const time_t *timer); */
* Use: It converts the time_t value to a structure (struct tm) representing the UTC (GMT) time. Similar to localtime, but represents the time in Coordinated Universal Time.

4. strftime: Formats a time value as a string.

* /* size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr); */
* Use: It formats the time represented by the struct tm pointer timeptr according to the format string format and stores the result in the character array str. The maximum number of characters to be written is specified by maxsize.

5. mktime: Converts a struct tm value to time_t.

* /* time_t mktime(struct tm *timeptr); */
* Use: It converts the values in the struct tm structure timeptr into a time_t value, representing the calendar time.

6. difftime: Calculates the difference between two time_t values.

* /* double difftime(time_t time1, time_t time0); */
* Use: It calculates the difference in seconds between time1 and time0 and returns the result as a double value.

###### These functions are useful for working with date and time values, converting between different representations, formatting time as strings, and calculating time differences. Additionally, <time.h> also provides types like time_t and struct tm to represent time values and date/time components respectively.
### <fcntl.h> header file in C provides various constants and function prototypes related to file control operations. It is primarily used for low-level file operations and provides functions for opening, manipulating, and controlling file descriptors. Here are some commonly used functions, constants, and macros provided by <fcntl.h>:
1. open: Opens a file.

* /* int open(const char *pathname, int flags, mode_t mode); */
* Use: It opens a file specified by pathname with the specified flags and mode (file permissions) and returns a file descriptor.

2. creat: Creates a new file.

* /* int creat(const char *pathname, mode_t mode); */
* Use: It creates a new file specified by pathname with the specified mode (file permissions) and returns a file descriptor.

3. close: Closes a file descriptor.

* /* int close(int fd); */
* Use: It closes the file descriptor fd, releasing the associated resources.

4. read: Reads data from a file descriptor.

* /* ssize_t read(int fd, void *buf, size_t count); */
* Use: It reads up to count bytes of data from the file descriptor fd into the buffer buf and returns the number of bytes read.

5. write: Writes data to a file descriptor.

* /* ssize_t write(int fd, const void *buf, size_t count); */
* Use: It writes up to count bytes of data from the buffer buf to the file descriptor fd and returns the number of bytes written.

6. fcntl: Performs various control operations on a file descriptor.

* /* int fcntl(int fd, int cmd, ... /* arg */ ); */
* Use: It performs control operations on the file descriptor fd using the specified cmd and optional arguments.

##### Constants and Macros:

1. File Access Modes:

* O_RDONLY: Open for read-only.
* O_WRONLY: Open for write-only.
* O_RDWR: Open for read-write.
2. File Creation Flags:

* O_CREAT: Create the file if it does not exist.
* O_EXCL: Exclusive file creation, fails if the file already exists.
* O_TRUNC: Truncate the file to zero length if it exists.
3. File Descriptor Flags:

* O_APPEND: Set the file offset to the end of the file before each write.
* O_NONBLOCK: Set non-blocking mode for the file descriptor.
4. F_SETFL, F_GETFL: Control and retrieve file status flags.

###### These functions, constants, and macros provided by <fcntl.h> are useful for performing low-level file operations, such as opening, closing, reading, and writing files, as well as controlling file descriptors and file access modes. It's important to refer to the documentation or appropriate references for a complete list of functions, constants, and their specific uses.

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
**Malloc**
* The `malloc()` function allocates a block of memory of the specified size and returns a pointer to the beginning of the allocated memory. The `malloc()` function takes a single argument, which is the size of the memory block to be allocated, in bytes.
* If the `malloc()` function succeeds, it returns a pointer to the beginning of the allocated memory. If the `malloc()` function fails, it returns a null pointer.
##### Realloc
The `realloc()` function changes the size of a previously allocated memory block. The `realloc()` function takes two arguments, the first argument is a pointer to the previously allocated memory block, and the second argument is the new size of the memory block, in bytes.
If the `realloc()` function succeeds, it returns a pointer to the beginning of the new memory block. If the `realloc()` function fails, it returns a null pointer.
##### Calloc
The `calloc()` function allocates a block of memory and initializes all of the bytes in the block to zero. The `calloc()` function takes two arguments, the first argument is the number of elements to be allocated, and the second argument is the size of each element, in bytes.
If the `calloc()` function succeeds, it returns a pointer to the beginning of the allocated memory. If the `calloc()` function fails, it returns a null pointer.
##### Free
The `free()` function frees a previously allocated memory block. The `free()` function takes a single argument, which is a pointer to the memory block to be freed.
If the `free()` function succeeds, it does nothing. If the `free()` function fails, it generates a segmentation fault.antation fault or other error message that indicates there was some problem with the operation.
** Examples **
1. {
2. 	// Allocate a block of memory of size 10 bytes.
3. 		char *ptr = malloc(10);
4. 	// Change the size of the memory block to 20 bytes.
5. 		ptr = realloc(ptr, 20);
6. 	// Allocate a block of memory and initialize all of the bytes to zero.
7. 		int *arr = calloc(10, sizeof(int));
8. 	// Free the memory block pointed to by ptr.
9. 		free(ptr);
10. }
