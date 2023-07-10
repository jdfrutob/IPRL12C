#include ".\1D\Binegas_1D.h"
#include ".\2D\Binegas_2D.h"
#include ".\ME\Binegas_ME.h"
#include ".\LRT\Binegas_Valdez_LRTSYS.h"

void Prelim_exit_prog()
{
    printf("Thankyouu\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez.h ft:Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit (0);
}
void Prelim_Menu()
{
    // Define the options for exercises.
    char* prelim_options[] =
    {
        "1D Array Exercises",
        "2D Array Exercises",
        "LRT System",
        "ME",
        "Exit Program"
    };

    // Calculate the number of exercise options.
    int prelim_exercise_options = sizeof(prelim_options) / sizeof(prelim_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in two columns.
        for (int i = 0; i < prelim_exercise_options; i += 2)
        {
            printf("[%d] %-20s", i + 1, prelim_options[i]);
            if (i + 1 < prelim_exercise_options)
            {
            printf(" [%d] %s", i + 2, prelim_options[i + 1]);
            }
            printf("\n");
        }

        // Get the user's choice of exercise.
        int selected_prelim_exercise = get_int( 1, prelim_exercise_options,"\nPlease choose an option : ");

        // Execute the selected exercise.
        switch (selected_prelim_exercise)
        {
            case 1:
                system("cls");
                printf("\nYou Have Chosen 1D Array Exercises\n\n");
                oneDmain();
                printf("\n");
                break;

            case 2:
                system("cls");
                printf("\nYou Have Chosen 2D Array Exercises\n\n"); 
                twoDmain();
                printf("\n");
                break;

            case 3:
                system("cls");
                printf("\nYou Have Chosen Prelim Machine Exercises\n\n"); 
                ME_main();
                printf("\n");
                break;
            case 4:
                system("cls");
                printf("\nYou Have Chosen LRT System\n\n");
                lrt_main();
                printf("\n");
                break;

            case 5:
                system("cls");
                printf("\nYou Have Chosen to Exit the Program.......\n");
                Prelim_exit_prog();
                break;

            default:
                break;
        }
    } 

}

int Prelim_main()
{
    printf("\nBinegas Prelim Activities:\n\n");
    Prelim_Menu();
    printf("\n");
    return 0;
}
