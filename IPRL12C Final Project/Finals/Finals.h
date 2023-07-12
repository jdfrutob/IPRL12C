#include ".\Recursion\Recursion.h"
#include ".\FP Samples\FP_Samples.h"
#include ".\MP3_4\MP3_4.h"
#include ".\FP_IV\IV.h"

void Finals_exit_prog();
void Finals_Menu();

int Finals_main()
{
    printf("\nBinegas Finals Activities:\n\n");
    Finals_Menu();
    printf("\n");
    return 0;
}

void Finals_Menu()
{
    // Define the options for exercises.
    char* Finals_options[] =
    {
        "Recursion Exercises",
        "File Processing Samples",
        "File Processing (7/3/2023)",
        "File Processing (7/6/2023)",
        "Go Back to Main Menu",
        "Exit Program"
    };

    // Calculate the number of exercise options.
    int Finals_exercise_options = sizeof(Finals_options) / sizeof(Finals_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in two columns.
        for (int i = 0; i < Finals_exercise_options; i += 2)
        {
            printf("[%d] %-20s\t\t", i + 1, Finals_options[i]);
            if (i + 1 < Finals_exercise_options)
            {
            printf(" [%d] %s\t\t", i + 2, Finals_options[i + 1]);
            }
            printf("\n");
        }



        // Get the user's choice of exercise.
        int selected_finals_exercise = get_int(1, Finals_exercise_options,"\nPlease choose an option : ");

        // Execute the selected exercise.
        switch (selected_finals_exercise)
        {
            case 1:
                system("cls");
                printf("\nYou Have Chosen Recursion Exercises\n\n");
                R_main();
                printf("\n");
                break;

            case 2:
                system("cls");
                printf("\nYou Have Chosen File Processing Samples\n\n"); 
                FPS_main();
                printf("\n");
                break;

            case 3:
                system("cls");
                printf("\nYou Have Chosen File Processing (7/3/2023)\n\n\n"); 
                M34_main();
                printf("\n");
                break;

            case 4:
                system("cls");
                printf("\nYou Have Chosen File Processing (7/6/2023)\n\n\n"); 
                IV_main();
                printf("\n");
                break;

            case 5:
                system("cls");
                printf("\nYou Have Chosen to Go Back to Main Menu.......\n");
                return;
                break;

            case 6:
                system("cls");
                printf("\nYou Have Chosen to Exit the Program.......\n");
                Finals_exit_prog();
                break;

            default:
                break;
        }
    } 
}
void Finals_exit_prog()
{
    printf("Thankyouu\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez_v4.h ft:Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit (0);
}