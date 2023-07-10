void M34_menu();
void M34_1();
void M34_2();
void M34exit_program();

int M34_main()
{
    printf("\nBinegas File Processing MP3&4 (7/3/2023):\n\n");
    M34_menu();
    printf("\n");

    return 0;
}

void M34_menu()
{
    // Define the options for exercises.
    char* M34exercise_options[] =
    {
        "Machine Problem  3",
        "Machine Problem   4",
        "Exit Program"
    };

    // Calculate the number of exercise options.
    int num_M34exercise_options = sizeof(M34exercise_options) / sizeof(M34exercise_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in two columns.
        for (int i = 0; i < num_M34exercise_options; i += 2)
        {
            printf("[%d] %-20s", i + 1, M34exercise_options[i]);
            if (i + 1 < num_M34exercise_options)
            {
                printf(" [%d] %s", i + 2, M34exercise_options[i + 1]);
            }
            printf("\n");
        }

        // Get the user's choice of exercise.
        int selected_M34exercise = get_int(1, num_M34exercise_options,"Please choose an option: ");

        // Execute the selected exercise.
        switch (selected_M34exercise)
        {
        case 1:
            system("cls");
            printf("\nYou Have Chosen Machine Problem 3\n\n");
            M34_1();
            printf("\n");
            break;

        case 2:
            system("cls");
            printf("\nYou Have Chosen Machine Problem 2\n\n");
            M34_2();
            printf("\n");
            break;

        case 3:
            system("cls");
            printf("\nYou Have Chosen to Exit the Program.......\n");
            M34exit_program();
            break;

        default:
            break;
        }
    }
}

void M34_1()
{
    printf(" (7/3/2023) Machine Exercise 1\n");

    int n1 = get_int( 0, 9999,"Enter first integer (n1): ");
    int n2 = get_int(0, 9999,"Enter second integer (n2): ");

    if (n1 >= n2)
    {
        printf("Error: n1 should be less than n2\n");
        return;
    }

    FILE* file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return;
    }

    for (int i = n1; i <= n2; i++)
        fprintf(file, "%d\n", i);

    fclose(file);
    printf("Output written to output.txt\n");
}

void M34_2()
{
    printf(" (7/3/2023) Machine Exercise 2\n");
    FILE* file = fopen("output.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return;
    }

    int num;
    while (fscanf(file, "%d", &num) == 1)
    {
        printf("%d\n", num);
    }

    fclose(file);
}

void M34exit_program()
{
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n");
    printf("Valdez.h by Marc Valdez\n");
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}