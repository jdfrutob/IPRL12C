#include<stdio.h>
#include<stdlib.h>
#include "valdez.h"

void display_menu();
void exercise_1();
void exercise_2();
void exercise_3();
void exercise_4();
void exercise_5();
void exercise_6();
void exercise_7();
void exercise_8();
void exercise_9();
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
        "Exercise 4",
        "Exercise 5",
        "Exercise 6",
        "Exercise 7",
        "Exercise 8",
        "Exercise 9",
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
                printf("\nYou Have Chosen Exercise 4\n\n");
                exercise_4();
                printf("\n");
                break;

            case 5:
                system("cls");
                printf("\nYou Have Chosen Exercise 5\n\n");
                exercise_5();
                printf("\n");
                break;

            case 6:
                system("cls");
                printf("\nYou Have Chosen Exercise 6\n\n");
                exercise_6();
                printf("\n");
                break;

            case 7:
                system("cls");
                printf("\nYou Have Chosen Exercise 7\n\n");
                exercise_7();
                printf("\n");
                break;

            case 8:
                system("cls");
                printf("\nYou Have Chosen Exercise 8\n\n");
                exercise_8();
                printf("\n");
                break;

            case 9:
                system("cls");
                printf("\nYou Have Chosen Exercise 9\n\n");
                exercise_9();
                printf("\n");
                break;

            case 10:
                system("cls");
                printf("\nYou Have Chosen to Exit the Program.......\n");
                exit_program();
                break;

            default:
                break;
        }
    } 
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void exercise_1(void)
{
    int x = 5;
    int y = 10;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}


void exercise_2()
{
    int x = 5;
    int y = 10;

    swap(&x, &y);

    printf("x = %d, y = %d\n", x, y);
}
void exercise_3()
{
    int a[5];
    int *pa;

    for (int i = 0; i < 5; i++)
    {
        a[i] = i + 1;
        pa = &a[i];
        printf("a[%d] = %d\n", i, *pa);
    }
}
void exercise_4()
{
    int a[5];
    int *pa;

    for (int i = 0; i < 5;i++)
    {
        a[i] = i + 1;
        pa = &a[i];
        printf("a[%d] = %d\n", i, *pa);
    }
}
void exercise_5() 
{
    int a[5];
    int *pa;

    for (int i = 0; i < 5; i++)
         a[i] = 5 - i;  
    
    pa = &a[4];
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, *(pa - i));
     
}

void exercise_6() 
{ 
    int a[5];
    int *pa;

    for (int i = 0; i < 5; i++)
         a[i] = 5 - i;  
    
    pa = &a[0];
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, *(pa + i));

}
void exercise_7()
{
    int a[5];
    int *pa; 
    int i;

    // initialize the array
    for (i = 0; i < 5; i++) 
        a[i] = 5 - i; 
    

    
    pa = &a[0];
    
    printf("a[0] = %d\n", *pa);
    pa++;
    printf("a[1] = %d\n", *pa);
    pa++;
    printf("a[2] = %d\n", *pa);
    pa++;
    printf("a[3] = %d\n", *pa);
    pa++;
    printf("a[4] = %d\n", *pa);
}
void exercise_8()
{
    int a[5];
    int *pa; 
    int i;

    for (i = 0; i < 5; i++) 
        a[i] = 5 - i;


    pa = &a[0];

    printf("*pa = %d\n", *pa);

    pa = pa + 3;

    printf("*pa = %d\n", *pa);

    pa = pa - 2;

    printf("*pa = %d\n", *pa);

    pa--;

    printf("*pa = %d\n", *pa);

}
void exercise_9()
{
    int a[5];
    int *pa; 
    int i;

    for (i = 0; i < 5; i++) 
        a[i] = 5 - i;

    pa = &(a[0]);

    for (i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, *pa);
        pa++;
    }
}

void exit_program() 
{ 
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n"); 
    printf("Valdez.h by Marc Valdez\n"); 
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}