void FPS_menu();
void FPS_1();
void FPS_2();
void FPS_3();
void FPS_4();
void FPS_5();
void FPSexit_program();

int FPS_main()
{
    printf("\nBinegas File Processing Samples:\n\n");
    FPS_menu();
    printf("\n");
}

void FPS_menu()
{
    // Define the options for exercises.
    char* FPSexercise_options[] =
    {
        "Exercise 1",
        "Exercise 2",
        "Exercise 3",
        "Exercise 4",
        "Exercise 5",

        "Exit Program"
    };

    // Calculate the number of exercise options.
    int num_FPSexercise_options = sizeof(FPSexercise_options) / sizeof(FPSexercise_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in two columns.
        for (int i = 0; i < num_FPSexercise_options; i += 2)
        {
            printf("[%d] %-20s", i + 1, FPSexercise_options[i]);
            if (i + 1 < num_FPSexercise_options)
            {
            printf(" [%d] %s", i + 2, FPSexercise_options[i + 1]);
            }
            printf("\n");
        }

        // Get the user's choice of exercise.
        int selected_exercise = get_int(1, num_FPSexercise_options,"\nPlease choose an option : ");

        // Execute the selected exercise.
        switch (selected_exercise)
        {
            case 1:
                system("cls");
                printf("\nYou Have Chosen File Processing Sample 1\n\n");
                FPS_1();
                printf("\n");
                break;

            case 2:
                system("cls");
                printf("\nYou Have Chosen File Processing Sample 2\n\n"); 
                FPS_2();
                printf("\n");
                break;

            case 3:
                system("cls");
                printf("\nYou Have Chosen File Processing Sample 3\n\n");
                FPS_3();
                printf("\n");
                break;

            case 4:
                system("cls");
                printf("\nYou Have Chosen File Processing Sample 4\n\n");
                FPS_4();
                printf("\n");
                break;

            case 5:
                system("cls");
                printf("\nYou Have Chosen File Processing Sample 5\n\n");
                FPS_5();
                printf("\n");
                break;

            case 6:
                system("cls");
                printf("\nYou Have Chosen to Exit the Program.......\n");
                FPSexit_program();
                break;

            default:
                break;
        }
    } 
}
void FPS_1() // this section defines the function source code 1 
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

void FPS_2() // this section defines the function source code 2 
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
void FPS_3() // this section defines the function source code 3 
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

void FPS_4() // this section defines the function source code 4 
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

void FPS_5() // this section defines the function source code 5 
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
void FPSexit_program() 
{ 
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n"); 
    printf("Valdez.h by Marc Valdez\n"); 
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}