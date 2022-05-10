/*
 * 
 * This program shows you what happens in
 * memory when you assign to a variable.
 *
 * Instructions:
 * Run the program to see that assigning
 * to a variable gives it a value.
 * It does not change the size or type 
 * of a variable and does not change the 
 * location of the variable in memory.
 */
#include <stdio.h>

int main(void) {
    int i;  /* i's value is undefined */
    int j;  /* j's value is undefined */
    printf("value of i: %d\n", i);
    printf("value of j: %d\n", j);
    
    /* i and j are both 4 byte ints */
    printf("size of i: %lu\n", sizeof(i));
    printf("size of j: %lu\n", sizeof(j));
    
    /* 
     * i and j are next to each other in 
     * memory (see csc1032-variable-declare)
     */
    printf("address of i: %p\n", &i);
    printf("address of j: %p\n", &j);
    printf("address of i - address of j: %lu\n",
        (unsigned long) &i - (unsigned long) &j);

    /* 
     * i and j are now assigned the values
     * 10 and 11, respectively
     */
    i = 10;
    j = 11;
    printf("value of i: %d\n", i);
    printf("value of j: %d\n", j);
    
    /* 
     * the following code shows that 
     * the size of i and j and their 
     * locations in memory do not 
     * change
     */
    printf("size of i: %lu\n", sizeof(i));
    printf("size of j: %lu\n", sizeof(j));
    printf("address of i: %p\n", &i);
    printf("address of j: %p\n", &j);
    printf("address of i - address of j: %lu\n", 
        (unsigned long) &i - (unsigned long) &j);

    return 0;
}
