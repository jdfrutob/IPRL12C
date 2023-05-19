#include<stdio.h>
#include<stdlib.h>
#include "valdez.h"

void main_menu();
void exer_1();
void exer_2();
void exer_3();
void exer_4();
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
            "Exit Program"
        };

        for(int i = 0; i < 5; i++)
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
                printf("\nYou Have Chosen to Exit the Program.......\n");
                exit_prog();
                break;

            default:
                break;
        }
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
