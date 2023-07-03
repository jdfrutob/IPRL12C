#include<stdio.h>
#include<stdlib.h>
#include "valdez.h"

void display_menu();
void exercise_1();
void exercise_2();
void exit_program();

int main()
{
    printf("\nBinegas File Processing Exercises (7/3/2023):\n\n");
    display_menu();
    printf("\n");

    return 0;
}

void display_menu()
{
    // Define the options for exercises.
    char* exercise_options[] =
    {
        "Exercise 1",
        "Exercise 2",
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
        int selected_exercise = get_int("Please choose an option: ", "1234567890\n", 1, num_exercise_options);

        // Execute the selected exercise.
        switch (selected_exercise)
        {
        case 1:
            system("cls");
            printf("\nYou Have Chosen Machine Exercise 1\n\n");
            exercise_1();
            printf("\n");
            break;

        case 2:
            system("cls");
            printf("\nYou Have Chosen Machine Exercise 2\n\n");
            exercise_2();
            printf("\n");
            break;

        case 3:
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
    printf(" (7/3/2023) Machine Exercise 1\n");

    int n1 = get_int("Enter first integer (n1): ", "1234567890\n", 0, 9999);
    int n2 = get_int("Enter second integer (n2): ", "1234567890\n", 0, 9999);

    if (n1 >= n2)
    {
        printf("Error: n1 should be less than n2\n");
        return;
    }

    FILE* file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return;
    }

    for (int i = n1; i <= n2; i++)
        fprintf(file, "%d\n", i);

    fclose(file);
    printf("Output written to output.txt\n");
}

void exercise_2()
{
    printf(" (7/3/2023) Machine Exercise 2\n");
    FILE* file = fopen("output.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return;
    }

    int num;
    while (fscanf(file, "%d", &num) == 1)
    {
        printf("%d\n", num);
    }

    fclose(file);
}

void exit_program()
{
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n");
    printf("Valdez.h by Marc Valdez\n");
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}
