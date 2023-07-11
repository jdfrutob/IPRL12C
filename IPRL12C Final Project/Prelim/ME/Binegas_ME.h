void ME_menu();
void MExercise_1();
void MExercise_2();


int  ME_main()
{
    printf("\nBinegas Prelim Machine Exercises:\n\n");
    ME_menu();
    printf("\n");
    return 0;
}

void ME_menu()
{
    // Define the options for exercises.
    char* exercise_options[] =
    {
        "Exercise 1",
        "Exercise 2",
        "Go Back to Prelim Menu"
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
        int selected_exercise = get_int( 1, num_exercise_options,"\nPlease choose an option : ");

        // Execute the selected exercise.
        switch (selected_exercise)
        {
            case 1:
                system("cls");
                printf("\nYou Have Chosen Prelim Machine Exercise 1\n\n");
                MExercise_1();
                printf("\n");
                break;

            case 2:
                system("cls");
                printf("\nYou Have Chosen Prelim Machine Exercise 2\n\n"); 
                MExercise_2();
                printf("\n");
                break;

            case 3:
                system("cls");
                printf("\nYou Have Chosen to Go Back to Prelim Menu.......\n");
                return;
                printf("\n");
                break;

            default:
                break;
        }
    } 
}

int add(int a, int b)
{
    int sum = 0; // local variable
    sum = a + b;
    return sum;
}

int multiply(int a, int b)
{
    return a * b;
}

void displayMessage()
{
    printf("I Love C Programming !!!\n");
}
void MExercise_1()
{
    printf("*************************************************************\n");
    printf("Machine Exercise 1 - September 2, 2023\n\n");
    int x = 200, y = 350;
    printf("The addition of %d and %d gives %d\n", x, y, add(x, y)); // 1st function call

    printf("%d\n", add(65, 75)); // 2nd function call

    printf("The result is %d\n", add(x + 2, y)); // 3rd function call

    printf("The multiplication result is %d\n", multiply(8, 5));

    for(int i = 0; i < 5; i++)
        displayMessage();

    printf("\n");
}

float calculateCharge(int messages) 
{
    return messages <= 150 ? 0 : 0.7 * (messages - 150);
}
void MExercise_2()
{
    int messages;
    printf("Please enter the number of text messages you have sent: ");
    scanf("%d", &messages);

    printf("Your total charge is PHP %.2f\n", calculateCharge(messages));
}

void MExit_prog()
{
    printf("Thankyouu\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez.h ft:Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit (0);
}