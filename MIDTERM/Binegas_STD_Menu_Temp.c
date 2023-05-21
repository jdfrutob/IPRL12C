#include<stdio.h>
#include<stdlib.h>
#include "valdez.h"

void main_menu();
void exer_1();
void exer_2();
void exer_3();
void exer_4();
void exer_5();
void exer_6();
void exit_prog();

int main()
{
    printf("\nBinegas Structures Exercises:\n");
    main_menu();
}

void main_menu()
{
    while(1)
    {
        char* exercises[] =
        {
            "Exercise 1",
            "Exercise 2",
            "Exercise 3",
            "Exercise 4",
            "Exercise 5",
            "Exercise 6",
            "Exit Program"
        };

        for(int i = 0; i < 6; i++)
        {
            printf("[%d] %s\n", i + 1, exercises[i]); 
        }

        int num_exercises = sizeof(exercises) / sizeof(exercises[0]); 
        int user_sel = get_int("Pick an Exercise: ", "123456789\n", 1, 9);

        switch (user_sel)
        {
            case 1:
                printf("\nYou Have Chosen Exercise 1\n\n");
                exer_1();
                break;

            case 2:
                printf("\nYou Have Chosen Exercise 2\n\n"); 
                exer_2();
                break;

            case 3:
                printf("\nYou Have Chosen Exercise 3\n\n");
                exer_3();
                break;

            case 4:
                printf("\nYou Have Chosen Exercise 4\n\n");
                exer_4();
                break;
            
            case 5:
                printf("\nYou Have Chosen Exercise 4\n\n");
                exer_5();
                break;

            case 6:
                printf("\nYou Have Chosen Exercise 4\n\n");
                exer_6();
                break;

            case 7:
                printf("\nYou Have Chosen to Exit the Program.......\n");
                exit_prog();
                break;

            default:
                break;
        }
    }   
}
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
void exer_1()
{
     // Declare two integer variables
    int x, y;

    // Assign the value 5 to x
    x = 5;

    // Assign the value 10 to y
    y = 10;

    // Call the swap function with x and y as inputs
    swap1(x, y);

    // Print the values of x and y
    printf("Value of x: %d\nValue of y: %d\n", x, y);

}
void swap2 (int *px, int *py)
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
void exer_2()
{
     // Declare two integer variables
    int x, y;

    // Assign values to x and y
    x = 5;
    y = 10;

    // Call the swap function, passing pointers to x and y as arguments
    swap2(&x, &y);

    // Print the values of x and y
    printf("x = %d, y = %d\n", x, y);
}
void exer_3()
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
void exer_4()
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
    for (int i = 0; i < 5; i++) 
    {
    // Printing the value of the i-th element of the array "a" using pointer arithmetic
    // Pointer arithmetic is used by adding the value of "i" to the memory location of the first element of the array "a" (stored in "pa") and then dereferencing the resulting pointer using the * operator
    printf("a[%d] = %d\n", i, *(pa + i));
    }
}
void exer_5()
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
void exer_6()
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
void exit_prog()
{
    printf("Thankyouu\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez.h ft:Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit (0);
}
