/*
 * 
 * This program shows you what happens in
 * memory when you declare a variable.
 *
 * Instructions:
 * Read the comments in the code below and
 * run the program.
 * Make sure you understand the output.
 */
#include <stdio.h>

int main(void) {
    int i;  /* declare int variable i */
    int j;  /* declare int variable j */
    /*
     * The following line prints the value
     * of i. The output for i may be 0
     * or some other value.
     * Before assignment we cannot rely on 
     * the value. It is just whatever is in
     * the memory location on the stack
     * that has been allocated for i
     */
    printf("value of i: %d\n", i);
    /*
     * The following line prints the value
     * of j. The output for j may be 0
     * or some other value.
     * Before assignment we cannot rely on 
     * the value.
     */
    printf("value of j: %d\n", j);
    
    /* 
     * The sizeof function returns the
     * number of bytes of memory used for
     * a variable.
     * The following line prints the number
     * of bytes used for int i. On this 
     * machine architeture it is 4 bytes 
     * or 32 bits.
     */
    printf("size of i: %lu\n", sizeof(i));
    /*
     * The following line prints the number
     * of bytes used for int j on this 
     * machine architeture.
     * j will be the same size as i.
     * Variables of the same type are the 
     * same size.
     */
    printf("size of j: %lu\n", sizeof(j));

    /* 
     * The & (address of) operator returns 
     * the address of an object/variable. 
     * That is, &i gives the address of i.
     * The %p print format placeholder is 
     * used to print an address (or pointer 
     * value) in hexadecimal format.
     * The following line prints the 
     * address of i.
     */
    printf("address of i: %p\n", &i);
    /* 
     * The following line prints the
     * address of j.
     * Notice that j is next to i in 
     * memory. Both i and j are allocated
     * on the stack of the current process. 
     * The stack is where currently 
     * executing function calls and 
     * local variables and parameters 
     * associated with a function call are 
     * held.
     */
    printf("address of j: %p\n", &j);
    
    /* 
     * The following line converts the
     * addresses of i and j to unsigned
     * long integers so that we can do 
     * a normal arithmetic operation on 
     * the addresses. In this case we
     * subtract the address of j from the 
     * address of i.
     * You should see that the address
     * of j is 4 bytes less than the 
     * address of i. This is because the
     * stack grows downwards (earlier
     * declarations are higher up the stack
     * and an int is 4 bytes on this
     * architecture and, therefore, j is
     * allocated 4 bytes away from i.
     * That is, the start of the 
     * 4 byte int j is at an address 4
     * bytes away from the start of the 
     * 4 byte int i.
     */
    printf("address of i - address of j: %lu\n", 
        (unsigned long) &i - (unsigned long) &j);

    return 0;
}