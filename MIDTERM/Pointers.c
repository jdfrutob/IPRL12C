#include <stdio.h>

// Source Code : 1
// Define a function called swap that takes two integers as input
void swap (int x, int y)
{
    // Declare a temporary integer variable
    int temp;

    // Assign the value of x to the temporary variable
    temp = x;

    // Assign the value of y to x
    x = y;

    // Assign the temporary value to y
    y = temp;
} 

// Define the main function
void main(void)
{
    // Declare two integer variables
    int x, y;

    // Assign the value 5 to x
    x = 5;

    // Assign the value 10 to y
    y = 10;

    // Call the swap function with x and y as inputs
    Swap(x, y);

    // Print the values of x and y
    printf(“x = %d,  y = %d\n”, x, y);
}

// Source Code : 2

#include <stdio.h>

// This function takes two integer pointers as input and swaps their values
void swap (int *px, int *py)
{
    // Declare a temporary integer variable
    int temp;

    // Store the value at the memory location pointed to by px in temp
    temp = *px;

    // Copy the value at the memory location pointed to by py to the location pointed to by px
    *px = *py;

    // Copy the original value of px (stored in temp) to the memory location pointed to by py
    *py = temp;
} 

// The main function
void main(void)
{
    // Declare two integer variables
    int x, y;

    // Assign values to x and y
    x = 5;
    y = 10;

    // Call the swap function, passing pointers to x and y as arguments
    swap(&x, &y);

    // Print the values of x and y
    printf("x = %d, y = %d\n", x, y);
}

// Source Code : 3
#include <stdio.h>

void main(void)
{
    int a[5];   // Declare an array of 5 integers
    int *pa;   // Declare a pointer to an integer
    int i;    // Declare a counter variable

    // initialize the array with values from 0 to 4
    for (i = 0; i < 5; i++)
        a[i] = 5 + i; 

    // print the contents of the array
    for (i = 0; i < 5; i++)
    {
        pa = &a[i];  // get the address of the i'th element of 'a'
        printf("a[%d] = %d\n", i, *pa); // print the value of the i'th element of 'a'
    }
}

// Source Code : 4
#include <stdio.h>

void main(void)
{
    int a[5];   // Declare an array of 5 integers
    int *pa;   // Declare a pointer to an integer
    int i;    // Declare a counter variable

    // initialize the array with values from 0 to 4
    for (i = 0; i < 5; i++)
        a[i] = 5 + i; 

    // Declaring a pointer to an integer variable and initializing it with the memory location of the first element of the array "a"
    int *pa = &a[0];

    // Looping through the elements of the array "a"
    for (int i = 0; i < 5; i++) {
    // Printing the value of the i-th element of the array "a" using pointer arithmetic
    // Pointer arithmetic is used by adding the value of "i" to the memory location of the first element of the array "a" (stored in "pa") and then dereferencing the resulting pointer using the * operator
    printf("a[%d] = %d\n", i, *(pa + i));
}

// Source Code : 5
#include <stdio.h>

void main(void)
{
    int a[5];   // Declare an array of 5 integers
    int *pa;   // Declare a pointer to an integer
    int i;    // Declare a counter variable

    // initialize the array with values from 0 to 4
    for (i = 0; i < 5; i++)
        a[i] = 5 + i; 

    // Declaring a pointer to an integer variable
    int *pa = &a[4];

    // Loop through the array in reverse order using pointer arithmetic
    for (int i = 0; i < 5; i++) 
        printf("a[%d] = %d\n", i, *(pa - i));
}

// Source Code : 6
#include <stdio.h>

void main(void)
{
    int a[5];   // Declare an array of 5 integers
    int *pa;   // Declare a pointer to an integer
    int i;    // Declare a counter variable

    // initialize the array with values from 0 to 4
    for (i = 0; i < 5; i++)
        a[i] = 5 + i; 

    // print the contents of the array
    for (i = 0; i < 5; i++)
    {
        // The following line prints the index and value of the array element.
        // The *(a+i) expression dereferences the pointer to the ith element of the array.
        // This is equivalent to a[i].
        printf("a[%d] = %d\n", i, *(a + i));
    }
}
