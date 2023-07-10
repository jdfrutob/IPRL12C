void PS_menu();
void PS_1();
void PS_2();
void PS_3();
void PS_4();
void PS_5();
void PS_6();
void PS_7();
void PS_8();
void PS_9();
void PS_exit_program();

int Pointers_Samples_main()
{
    printf("\nBinegas Pointers Exercises:\n\n");
    PS_menu();
    printf("\n");
    return 0;
}

void PS_menu()
{
    // Define the options for exercises.
    char* PSexercise_options[] =
    {
        "Pointers Sample Exercise 1",
        "Pointers Sample Exercise 2",
        "Pointers Sample Exercise 3",
        "Pointers Sample Exercise 4",
        "Pointers Sample Exercise 5",
        "Pointers Sample Exercise 6",
        "Pointers Sample Exercise 7",
        "Pointers Sample Exercise 8",
        "Pointers Sample Exercise 9",
        "Exit Program"
    };

    // Calculate the number of exercise options.
    int num_PSexercise_options = sizeof(PSexercise_options) / sizeof(PSexercise_options[0]);

    // Loop indefinitely until the user chooses to exit.
    while (1)
    {
        // Display the exercise options in two columns.
        for (int i = 0; i < num_PSexercise_options; i += 2)
        {
            printf("[%d] %-20s", i + 1, PSexercise_options[i]);
            if (i + 1 < num_PSexercise_options)
            {
            printf(" [%d] %s", i + 2, PSexercise_options[i + 1]);
            }
            printf("\n");
        }

        // Get the user's choice of exercise.
        int selected_PSexercise = get_int(1, num_PSexercise_options,"\nPlease choose an option : ");

        // Execute the selected exercise.
        switch (selected_PSexercise)
        {
            case 1:
                system("cls");
                printf("\nYou Have Chosen Exercise 1\n\n");
                PS_1();
                printf("\n");
                break;

            case 2:
                system("cls");
                printf("\nYou Have Chosen Exercise 2\n\n"); 
                PS_2();
                printf("\n");
                break;

            case 3:
                system("cls");
                printf("\nYou Have Chosen Exercise 3\n\n");
                PS_3();
                printf("\n");
                break;

            case 4:
                system("cls");
                printf("\nYou Have Chosen Exercise 4\n\n");
                PS_4();
                printf("\n");
                break;

            case 5:
                system("cls");
                printf("\nYou Have Chosen Exercise 5\n\n");
                PS_5();
                printf("\n");
                break;

            case 6:
                system("cls");
                printf("\nYou Have Chosen Exercise 6\n\n");
                PS_6();
                printf("\n");
                break;

            case 7:
                system("cls");
                printf("\nYou Have Chosen Exercise 7\n\n");
                PS_7();
                printf("\n");
                break;

            case 8:
                system("cls");
                printf("\nYou Have Chosen Exercise 8\n\n");
                PS_8();
                printf("\n");
                break;

            case 9:
                system("cls");
                printf("\nYou Have Chosen Exercise 9\n\n");
                PS_9();
                printf("\n");
                break;

            case 10:
                system("cls");
                printf("\nYou Have Chosen to Exit the Program.......\n");
                PS_exit_program();
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

void PS_1(void)
{
    int x = 5;
    int y = 10;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}


void PS_2()
{
    int x = 5;
    int y = 10;

    swap(&x, &y);

    printf("x = %d, y = %d\n", x, y);
}
void PS_3()
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
void PS_4()
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
void PS_5() 
{
    int a[5];
    int *pa;

    for (int i = 0; i < 5; i++)
         a[i] = 5 - i;  
    
    pa = &a[4];
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, *(pa - i));
     
}

void PS_6() 
{ 
    int a[5];
    int *pa;

    for (int i = 0; i < 5; i++)
         a[i] = 5 - i;  
    
    pa = &a[0];
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, *(pa + i));

}
void PS_7()
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
void PS_8()
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
void PS_9()
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

void PS_exit_program() 
{ 
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n"); 
    printf("Valdez.h by Marc Valdez\n"); 
    printf("Give Virtual clap!!!\n\n");
    exit(0);
}