
void Struct_menu();
void S_1();
void S_2();
void S_3();
void S_4();
void S_exit_prog();

int Struct_main()
{
    printf("\nBinegas Structures Exercises:\n");
    Struct_menu();
    return 0;
}

void Struct_menu()
{
    while(1)
    {
        char* S_exercises[] =
        {
            "Structure Exercise 1",
            "Structure Exercise 2",
            "Structure Exercise 3",
            "Structure Exercise 4",
            "Exit Program"
        };

        int num_Sexercise_options = sizeof(S_exercises) / sizeof(S_exercises[0]);

        for(int i = 0; i < num_Sexercise_options; i++)
        {
            printf("[%d] %s\n", i + 1, S_exercises[i]);
        }

        int selected_Sexercise = get_int(1, num_Sexercise_options, "\nPlease choose an option : ");

        switch (selected_Sexercise)
        {
            case 1:
                printf("\nYou Have Chosen Structure Exercise 1\n\n");
                S_1();
                break;

            case 2:
                printf("\nYou Have Chosen Structure Exercise 2\n\n");
                S_2();
                break;

            case 3:
                printf("\nYou Have Chosen Structure Exercise 3\n\n");
                S_3();
                break;

            case 4:
                printf("\nYou Have Chosen Structure Exercise 4\n\n");
                S_4();
                break;

            case 5:
                printf("\nYou Have Chosen to Exit the Program.......\n");
                S_exit_prog();
                break;

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }
}

void S_1()
{
    printf("\nExample 1:\n");

    struct {
        int x;
        int y;
    } point;

    // assign value to the members of structure variable point
    point.x = 10;
    point.y = 5;

    // display the value of the members of structure variable point
    printf("\nx=%d,\ty=%d\n\n", point.x, point.y);
}

void S_2()
{
    printf("\nExample 2:\n");

    struct pointType {
        int x;
        int y;
    };

    struct pointType point1, point2;
    point1.x = 5;
    point1.y = 100;

    point2 = point1; // structure to structure assignment

    // display the value of the members of structure point2
    printf("\npoint2.x=%d,\tpoint2.y=%d\n\n", point2.x, point2.y);
}

struct pointType {
    int x;
    int y;
};
struct pointType point1;

void PrintPoint(struct pointType p)
{
    printf("\nx=%d\n", p.x);
    printf("y=%d\n\n", p.y);
}

void S_3()
{
    printf("\nExample 3:\n");

    point1.x = 100;
    point1.y = 200;

    PrintPoint(point1);
}

void S_4()
{
    printf("\nExample 4:\n");

    struct pointType {
        int x;
        int y;
        int z;
    };

    struct pointType PointArray[5] = {
        {100, 20, 80}, // {x, y, z}
        {200, 30, 1},
        {400, 50, 7},
        {600, 70, 6},
        {800, 90, 8}
    };

    for(int i = 0; i < 5; i++)
        printf("\nPointArray[%d].x=%d,\tPointArray[%d].y=%d,\tPointArray[%d].z=%d\n\n", i, PointArray[i].x, i, PointArray[i].y, i, PointArray[i].z);
}

void S_exit_prog()
{
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez.h ft: Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit(0);
}
