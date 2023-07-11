void Recursion_menu();
void Rexercise_1();
void Rexercise_2();
void Rexercise_3();
void Rexercise_4();


int R_main()
{
    printf("\nBinegas Recursion Exercises:\n\n");
    Recursion_menu();
    printf("\n");
    return 0;
}

void Recursion_menu()
{
    // Define the options for exercises.
    char* Rexercise_options[] =
    {
        "Recursion Exercise 1",
        "Recursion Exercise 2",
        "Recursion Exercise 3",
        "Recursion Exercise 4",
        "Go Back to Finals Menu"
    };

    // Calculate the number of exercise options.
    int num_Rexercise_options = sizeof(Rexercise_options) / sizeof(Rexercise_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in two columns.
        for (int i = 0; i < num_Rexercise_options; i += 2)
        {
            printf("[%d] %-20s", i + 1, Rexercise_options[i]);
            if (i + 1 < num_Rexercise_options)
            {
                printf(" [%d] %s", i + 2, Rexercise_options[i + 1]);
            }
            printf("\n");
        }

        // Get the user's choice of exercise.
        int selected_Rexercise = get_int(1, num_Rexercise_options,"\nPlease choose an option : ");
        // Execute the selected exercise.
        switch (selected_Rexercise)
        {
            case 1:
                system("cls");
                printf("\nYou Have Chosen Recursion Exercise 1\n\n");
                Rexercise_1();
                printf("\n");
                break;

            case 2:
                system("cls");
                printf("\nYou Have Chosen Recursion Exercise 2\n\n");
                Rexercise_2();
                printf("\n");
                break;

            case 3:
                system("cls");
                printf("\nYou Have Chosen Recursion Exercise 3\n\n");
                Rexercise_3();
                printf("\n");
                break;

            case 4:
                system("cls");
                printf("\nYou Have Chosen Recursion Exercise 4\n\n");
                Rexercise_4();
                printf("\n");
                break;

            case 5:
                system("cls");
                printf("\nYou Have Chosen to Exit the Program.......\n");
                return;
                break;

            default:
                break;
        }
    } 
}

int Mystery(int x, int y) // Exercise 1
{
    if (y == 0)
        return x;
    else
        return Mystery(y, x % y);
}

void Rexercise_1()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int result = Mystery(x, y);
    printf("Mystery result: %d\n", result);
}

void BLIP(int n) // Exercise 2
{
    if (n != 0)
    {
        printf("BLIP = %d\n", n);
        BLIP(n - 1);
    }
}

void BLAP(int n) // Exercise 2
{
    if (n != 0)
    {
        BLIP(n);
        BLAP(n - 1);
    }
}

void Rexercise_2()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    BLAP(n);
}

int fibonacci(int n) // Exercise 3
{
    if (n == 0 || n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void Rexercise_3()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("Fibonacci result: %d\n", result);
}

int ackermann(int m, int n) // Exercise 4
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

void Rexercise_4()
{
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    int result = ackermann(m, n);
    printf("Ackermann result: %d\n", result);
}

