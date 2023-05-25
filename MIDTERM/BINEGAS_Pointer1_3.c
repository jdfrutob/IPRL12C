#include<stdio.h>
#include<stdlib.h>
#include "valdez.h"

void display_menu();
void exercise_1();
void exercise_2();
void exercise_3();
void exit_program();

int main()
{
    printf("\nBinegas Pointers Exercises:\n\n");
    display_menu();
    printf("\n");
}

void display_menu()
{
    // Define the options for exercises.
    char* exercise_options[] =
    {
        "Exercise 1",
        "Exercise 2",
        "Exercise 3",
        "Exit Program"
    };

    // Calculate the number of exercise options.
    int num_exercise_options = sizeof(exercise_options) / sizeof(exercise_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in two columns.
        for (int i = 0; i < num_exercise_options; i += 2)
        {
            printf("[%d] %-20s", i + 1, exercise_options[i]);
            if (i + 1 < num_exercise_options)
            {
            printf(" [%d] %s", i + 2, exercise_options[i + 1]);
            }
            printf("\n");
        }

        // Get the user's choice of exercise.
        int selected_exercise = get_int("\nPlease choose an option : ", "1234567890\n", 1, num_exercise_options);

        // Execute the selected exercise.
        switch (selected_exercise)
        {
            case 1:
                system("cls");
                printf("\nYou Have Chosen Exercise 1\n\n");
                exercise_1();
                printf("\n");
                break;

            case 2:
                system("cls");
                printf("\nYou Have Chosen Exercise 2\n\n"); 
                exercise_2();
                printf("\n");
                break;

            case 3:
                system("cls");
                printf("\nYou Have Chosen Exercise 3\n\n");
                exercise_3();
                printf("\n");
                break;

            case 4:
                system("cls");
                printf("\nYou Have Chosen to Exit the Program.......\n");
                exit_program();
                break;

            default:
                break;
        }
    } 
}
void exercise_1()
{
    //Write a program that declares one float variable and one double data type variable.
    float num1;
    double num2;

    //Declare also pointers to these variables
    float* ptr1;
    double* ptr2;

    //Initialize the float and double data type variables to any value that you like.
    num1 = 6.23;
    num2 = 8.24;

    //Thereafter, initialize the float pointer 
    //such that it has the address of the float variable and
    // do the same thing for the double data type pointer.
    ptr1 = &num1;
    ptr2 = &num2;

    //Print the values dereferenced through the pointers. 
    printf("\nThe value of num1 is %f\n", *ptr1);
    printf("The value of num2 is %f\n", *ptr2);
}

void exercise_2()
{
    //Assume the following declaration:
    double d;
    double *pd;

    //Explain the result of the following statements:
    pd = &d;
    printf("Input a value: ");
    scanf("%lf", &d);

    //What is the value of "d" after executing scanf()?
    printf("\nThe value of d is %lf\n", d);
}

int sum(int a, int b)
{
    int c;
    c = a + b;

    return c;
}

void add(int *pc, int a, int b)
{
    *pc = a + b;
}

void exercise_3()
{
    printf("The following function returns the sum of two integers:\n\n");

    printf("int sum(int a, int b)\n ");
    printf("{\n");
    printf("\t int c; \n");
    printf("\t c = a + b; \n");
    printf("\t return c; \n");
    printf("}\n\n");


    printf("The following does the same, except that a pointer is being used to store the sum.\n\n");
   

    printf("void add(int *pc, int a, int b)\n");
    printf("{\n");
    printf("\t *pc = a + b; \n");
    printf("}\n\n");
    

    printf("Which do you think is better?  Why?\n");
    printf("Both have different advantages namely :\n");
    printf("The first function is more concise and easier to understand. \n");
    printf("The second function is useful \n");
    printf("if you want to modify the value of a pointer from within a function.\n\n");

    // Give an example on how to call the function sum().
    printf("Function sum(int a, int b)\n");
    int a = 5;
    int b = 6;
    int c = sum(a,b);
    
    printf("Print sum(%d, %d) = %d\n\n", a, b, c);

    //Give an example of how to call the function add()
    printf("Function add(int *pc, int a, int b)\n");
    int *pc;

    add(pc, a, b);
    printf("Print add(%d, %d) = %d\n", a, b, *pc);
}

void exit_program() 
{ 
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n"); 
    printf("Valdez.h by Marc Valdez\n"); 
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}