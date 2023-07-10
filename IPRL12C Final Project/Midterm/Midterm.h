#include ".\ATM\ATM.h"
#include ".\Pointers_MEs\Pointers_MEs.h"
#include ".\Pointers_Samples\Pointers_Samples.h"
#include ".\Structures\Structures.h"

void Midterm_exit_prog();
void Midterm_Menu();

int Midterm_main()
{
    printf("\nBinegas Midterm Activities:\n\n");
    Midterm_Menu();
    printf("\n");
    return 0;
}

void Midterm_Menu()
{
    // Define the options for exercises.
    char* Midterm_options[] =
    {
        "ATM Final Version",
        "Pointers Machine Exercises",
        "Pointers Samples",
        "Structures Exercises",
        "Exit Program"
    };

    // Calculate the number of exercise options.
    int Midterm_exercise_options = sizeof(Midterm_options) / sizeof(Midterm_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in two columns.
        for (int i = 0; i < Midterm_exercise_options; i += 2)
        {
            printf("[%d] %-20s", i + 1, Midterm_options[i]);
            if (i + 1 < Midterm_exercise_options)
            {
            printf(" [%d] %s", i + 2, Midterm_options[i + 1]);
            }
            printf("\n");
        }

        // Get the user's choice of exercise.
        int selected_Midterm_exercise = get_int(1, Midterm_exercise_options,"\nPlease choose an option : ");

        // Execute the selected exercise.
        switch (selected_Midterm_exercise)
        {
            case 1:
                system("cls");
                printf("\nYou Have Chosen ATM Final Version\n\n");
                ATM_main();
                printf("\n");
                break;

            case 2:
                system("cls");
                printf("\nYou Have Chosen Pointers Machine Exercises\n\n"); 
                PMes_main();
                printf("\n");
                break;

            case 3:
                system("cls");
                printf("\nYou Have Chosen Pointers Sample Exercises\n\n"); 
                Pointers_Samples_main();
                printf("\n");
                break;

            case 4:
                system("cls");
                printf("\nYou Have Chosen Structures Exercises\n");
                Struct_main();
                break;

            case 5:
                system("cls");
                printf("\nYou Have Chosen to Exit the Program.......\n");
                Midterm_exit_prog();
                break;

            default:
                break;
        }
    } 
}
void Midterm_exit_prog()
{
    printf("Thankyouu\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez.h ft:Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit(0);
}