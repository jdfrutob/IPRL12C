#include<stdio.h>
#include<stdlib.h>
#include "valdez.h"

void menu (char* Exercises[], int size);
void exer_1();
void exer_2();
void exer_3();
void exer_4();
void exit_prog();

int main()
{
    printf("\nBinegas Structures Exercises:\n");
    char* Exercises[] =
    {
        "Exercise 1",
        "Exercise 2",
        "Exercise 3",
        "Exercise 4",
        "Exit Program"
    };

    int numExercises = sizeof(Exercises)/sizeof(Exercises[0]); 
    menu(Exercises,numExercises);
    int usersel = get_int("Pick an Exercise: ","123456789\n",1,9);

    switch (usersel)
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
    main();
}
void menu(char* Exercises[], int size)
{
    for(int i=0; i<size; i++)
        printf("[%d] %s\n",i+1, Exercises[i]); 
}
void exer_1() 
{
    struct 
    {
        int x;
        int y;
    } point;

    point.x = 10;
    point.y = 5;
    printf("x = %d, y = %d\n", point.x, point.y);
}
void exer_2() 
{
    
    struct pointType 
    {
        int x;
        int y;
    };

    struct pointType point1, point2;
    point1.x = 5;
    point1.y = 100;

    point2 = point1;

    printf("point2.x = %d, point2.y = %d\n", point2.x, point2.y);
}
struct pointType 
{
    int x;
    int y;
    
};
void exer_3() 
{
    struct pointType point1, point2;
    point1.x = 5;
    point1.y = 100;

    point2 = point1;
    printf("point2.x = %d, point2.y = %d\n", point2.x, point2.y);
}

void exer_4() 
{
    struct pointType 
    {
        int x;
        int y;
        int z;
    };
    struct pointType PointArray[5] = {
        {100, 20, 80}, // {x, y, z}
        {200, 30, 90},
        {400, 50, 110},
        {600, 70, 130},
        {800, 90, 150}
    };
    
    for(int i = 0; i < 5; i++) {
        printf("PointArray[%d].x = %d, PointArray[%d].y = %d, PointArray[%d].z = %d\n", 
               i, PointArray[i].x, i, PointArray[i].y, i, PointArray[i].z);
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
