#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include "valdez.h"

void display_menu();
void exercise_1();
void exercise_2();
void exit_program();

int main()
{
    printf("\nBinegas File Processing Exercises (7/6/2023):\n\n");
    display_menu();
    printf("\n");

    return 0;
}

void display_menu()
{
    // Define the options for exercises.
    char* exercise_options[] =
    {
        "Machine Exercise 1 : A program that will count all vowels in a .txt file.",
        "Machine Exercise 2 : A program that will determine 2 .txt files if they are identical or not.",
        "Exit Program"
    };

    // Calculate the number of exercise options.
    int num_exercise_options = sizeof(exercise_options) / sizeof(exercise_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in two columns.
        for (int i = 0; i < num_exercise_options; i++)
            printf("[%d] %s\n", i + 1, exercise_options[i]);



        // Get the user's choice of exercise.
        int selected_exercise = get_int("Please choose an option: ", "1234567890\n", 1, num_exercise_options);

        // Execute the selected exercise.
        switch (selected_exercise)
        {
        case 1:
            system("cls");
            printf("\nMachine Exercise 1 : A program that will count all vowels in a .txt file.\n\n");
            exercise_1();
            printf("\n");
            break;

        case 2:
            system("cls");
            printf("\nMachine Exercise 2 : A program that will determine 2 .txt files if they are identical or not.\n\n");
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
bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int countVowels(FILE *file) 
{
    int vowelCount = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) 
    {
        if (isVowel(ch)) {
            vowelCount++;
        }
    }

    return vowelCount;
}
void exercise_1()
{
    FILE *file;
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    int totalVowels = countVowels(file);

    fclose(file);

    printf("Total number of vowels: %d\n", totalVowels);
 
}

bool areFilesIdentical(const char *filepath1, const char *filepath2) {
    // Check if file paths are equal
    if (strcmp(filepath1, filepath2) != 0) {
        return false;
    }

    FILE *file1, *file2;
    int ch1, ch2;
    int count1 = 0, count2 = 0;

    file1 = fopen(filepath1, "r");
    if (file1 == NULL) {
        printf("Failed to open %s.\n", filepath1);
        return false;
    }

    file2 = fopen(filepath2, "r");
    if (file2 == NULL) {
        printf("Failed to open %s.\n", filepath2);
        fclose(file1);
        return false;
    }

    // Count the number of characters in file1
    while ((ch1 = fgetc(file1)) != EOF) {
        count1++;
    }

    // Count the number of characters in file2
    while ((ch2 = fgetc(file2)) != EOF) {
        count2++;
    }

    fclose(file1);
    fclose(file2);

    // Compare the character counts
    return count1 == count2;
}

void exercise_2() {
    char filepath1[100], filepath2[100];

    printf("Enter the first filepath: ");
    scanf("%99s", filepath1);

    printf("Enter the second filepath: ");
    scanf("%99s", filepath2);

    if (areFilesIdentical(filepath1, filepath2)) 
        printf("The files \"%s\" and \"%s\" are identical.\n", filepath1, filepath2);
    else
        printf("The files \"%s\" and \"%s\" are not identical.\n", filepath1, filepath2);
}

void exit_program()
{
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n");
    printf("Valdez.h by Marc Valdez\n");
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}
