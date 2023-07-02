#include<stdio.h>
#include<stdlib.h>
#include "valdez.h"

void display_menu();
void exercise_1();
void exercise_2();
void exercise_3();
void exercise_4();
void exercise_5();
void exit_program();

int main()
{
    printf("\nBinegas File Processing Exercises:\n\n");
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
                printf("\nYou Have Chosen to Exit the Program.......\n");
                exit_program();
                break;

            default:
                break;
        }
    } 
}
void exercise_1() // this section defines the function source code 1 
{
    FILE *inputf;
    
    int c;
    char filename[40];

    printf("Input name of text file: ");
    scanf("%39s", filename);

    if ((inputf = fopen(filename, "r")) == NULL) {
        printf("ERROR: %s cannot be opened.\n", filename);
        exit(1);
    }

    while ((c = fgetc(inputf)) != EOF) {
        printf("%c", c);
    }

    fclose(inputf);
}

void exercise_2() // this section defines the function source code 2 
{
    FILE *inputf;
    char filename[40];
    int c;

    printf("Input name of text file: ");
    scanf("%39s", filename);

    // Open file for input
    if ((inputf = fopen(filename, "r")) == NULL) {
        printf("ERROR: %s cannot be opened.\n", filename);
        exit(1);
    }

    while ((c = fgetc(inputf)) != EOF) {
        fputc(c, stdout);
    }
	
}
void exercise_3() // this section defines the function source code 3 
{
    FILE *inputf;
    FILE *outputf;
    char inputfilename[40];
    char outputfilename[40];
    int c;

    printf("Input name of input text file: ");
    scanf("%39s", inputfilename);

    // open input file
    if ((inputf = fopen(inputfilename, "r")) == NULL) {
        printf("ERROR: %s cannot be opened.\n", inputfilename);
        exit(1);
    }

    printf("Input name of output text file: ");
    scanf("%39s", outputfilename);

    // open output file
    outputf = fopen(outputfilename, "w");

    // read one character at a time from input file,
    // output character onto the output file
    while ((c = fgetc(inputf)) != EOF) {
        fputc(c, outputf);
    }

    fclose(inputf);
    fclose(outputf);

}

void exercise_4() // this section defines the function source code 4 
{
    FILE *outputf;
    char outputfilename[40];
    char ch;
    int i;
    float f;
    double d;

    // initialize variables
    ch = 'A';
    i = 100;
    f = 88.3;
    d = 3.1416;

    // ask for filename, open text file for output
    printf("Input name of output text file: ");
    scanf("%39s", outputfilename);

    outputf = fopen(outputfilename, "w");

    // output formatted data onto text file
    fprintf(outputf, "ch = %c\n", ch);
    fprintf(outputf, "i = %d\n", i);
    fprintf(outputf, "f = %f\n", f);
    fprintf(outputf, "d = %lf\n", d);
    fprintf(outputf, "Goodbye!\n");

    fclose(outputf);

}

void exercise_5() // this section defines the function source code 5 
{
    FILE *inputf;
    char inputfilename[40];
    char ch;
    int i;
    float f;
    double d;
    char mystr[40];

    // ask for filename, open text file for input
    printf("Input name of input text file: ");
    scanf("%39s", inputfilename);

    inputf = fopen(inputfilename, "r");

    // input formatted data from text file
    fscanf(inputf, "%c", &ch);
    fscanf(inputf, "%d", &i);
    fscanf(inputf, "%f", &f);
    fscanf(inputf, "%lf", &d);
    fscanf(inputf, "%39s", mystr);

    // output data – use fprintf()
    // note that the output can also be done using printf()
    fprintf(stdout, "ch = %c\n", ch);
    fprintf(stdout, "i = %d\n", i);
    fprintf(stdout, "f = %f\n", f);
    fprintf(stdout, "d = %lf\n", d);
    fprintf(stdout, "mystr = %s\n", mystr);

    fclose(inputf);
}
void exit_program() 
{ 
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n"); 
    printf("Valdez.h by Marc Valdez\n"); 
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}