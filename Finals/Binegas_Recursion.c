#include<stdio.h>
#include<stdlib.h>
#include "valdez.h"

void display_menu();
void exercise_1();
void exercise_2();
void exercise_3();
void exercise_4();
void exit_program();

int main()
{
    printf("\nBinegas Recursion Exercises:\n\n");
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
        "Exercise 4",
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
        int selected_exercise;
        printf("\nPlease choose an option : ");
        scanf("%d", &selected_exercise);

        // Clear the input buffer.
        while (getchar() != '\n')
            ;

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
                printf("\nYou Have Chosen Exercise 4\n\n");
                exercise_4();
                printf("\n");
                break;

            case 5:
                system("cls");
                printf("\nYou Have Chosen to Exit the Program.......\n");
                exit_program();
                break;

            default:
                break;
        }
    } 
}

int Mystery(int x, int y) // Exercise 1
{
    if (y == 0)
        return x;
    else
        return Mystery(y, x % y);
}

void exercise_1()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int result = Mystery(x, y);
    printf("Mystery result: %d\n", result);
}

void BLIP(int n) // Exercise 2
{
    if (n != 0)
    {
        printf("BLIP = %d\n", n);
        BLIP(n - 1);
    }
}

void BLAP(int n) // Exercise 2
{
    if (n != 0)
    {
        BLIP(n);
        BLAP(n - 1);
    }
}

void exercise_2()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    BLAP(n);
}

int fibonacci(int n) // Exercise 3
{
    if (n == 0 || n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void exercise_3()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("Fibonacci result: %d\n", result);
}

int ackermann(int m, int n) // Exercise 4
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

void exercise_4()
{
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    int result = ackermann(m, n);
    printf("Ackermann result: %d\n", result);
}

void exit_program() 
{ 
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n"); 
    printf("Valdez.h by Marc Valdez\n"); 
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}
