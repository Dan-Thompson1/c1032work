/* 
 * include the standard I/O library to use the 
 * printf function, see:
 * http://man7.org/linux/man-pages/man3/printf.3.html
 */
#include <stdio.h> 

/* 
 * NOTE: if you edit this file you will 
 * get your own copy.
 */


/*
 * Every C program has a main function
 * which is the entry point for execution
 * To run this program, press the green run button. 
 * Output will appear in the linux console on the 
 * right.
 * When you press run you should see the following
 * output:
 *      > clang-7 -pthread -lm -o main main.c
 *      > ./main
 *      Hello World
 *      >
 * The first line is the command to compile main.c
 * (this source file) using the C compiler clang-7
 * and output the result to a binary program file
 * called main.
 * The second line is the command to execute the 
 * program main in the current directory.
 * The third line is the program output (the string 
 * Hello World followed by a new line)
 * The fourth line returns to the shell prompt.
 *
 * To compile and run the program on a linux machine or a Mac, 
 * in a terminal enter the following commands at the shell prompt:
 *     cc helloworld.c
 * assuming the program is in file helloworld.c. The enter:
 *     ./a.out
 * to run the program.
 */
 int main(void) {
    /* printf prints output to the console */
    printf("Hello World\n");

    /*
     * the return value from main is a program's
     * exit code (by convention, 0 means success) 
     */
    return 0;
}