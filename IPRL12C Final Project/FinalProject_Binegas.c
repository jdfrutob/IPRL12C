#include "valdez_v4.h"
#include ".\Prelim\Prelim.h"
#include ".\Midterm\Midterm.h"
#include ".\Finals\Finals.h"


void Main_Menu();
void exit_program();

int main()
{
    printf("\nBinegas Final Project (Compilation):\n\n");
    Main_Menu();
    printf("\n");
    return 0;
}

void Main_Menu()
{
    // Define the options for exercises.
    char* exercise_options[] =
    {
        "Prelim",
        "Midterm",
        "Finals",
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
        int selected_exercise = get_int(1, num_exercise_options, "\nPlease choose an option : ");

        // Execute the selected exercise.
        switch (selected_exercise)
        {
            case 1:
                system("cls");
                printf("\nYou Have Chosen Prelim Activities\n\n");
                Prelim_main();
                printf("\n");
                break;

            case 2:
                system("cls");
                printf("\nYou Have Chosen Midterm Actiities\n\n"); 
                Midterm_main();
                printf("\n");
                break;

            case 3:
                system("cls");
                printf("\nYou Have Chosen Finals Activities\n\n");
                Finals_main();
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
void exit_program() 
{ 
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n"); 
    printf("Valdez_v4.h by Marc Valdez\n"); 
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}