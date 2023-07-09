#include ".\Recursion\Recursion.h"
#include ".\FP Samples\FP_Samples.h"
#include ".\MP3_4\MP3_4.h"
#include ".\FP_IV\IV.h"

void Finals_exit_prog();

void Finals_main()
{
    printf("\nBinegas Finals Activities:\n\n");
    Finals_Menu();
    printf("\n");
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
        "Exit Program"
    };

    // Calculate the number of exercise options.
    int Finals_exercise_options = sizeof(Finals_options) / sizeof(Finals_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in a single column.
        for (int i = 0; i < Finals_exercise_options; i++)
            printf("[%d] %-20s\n", i + 1, Finals_options[i]);



        // Get the user's choice of exercise.
        int selected_finals_exercise = get_int("\nPlease choose an option : ", "1234567890\n", 1, Finals_exercise_options);

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
                printf("\nYou Have Chosen to Exit the Program.......\n");
                Finals_exit_program();
                break;

            default:
                break;
        }
    } 
    return 0;
}
void Finals_exit_prog()
{
    printf("Thankyouu\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez.h ft:Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit (0);
}