void oneDmenu (char* Exercises[], int size);
void oneDexer_1();
void oneDexer_2();
void oneDexer_3();
void oneDexer_4();
void oneDexer_5();
void oneDexer_6();
void oneDexer_7();
void oneDexer_8();
void oneDexit_prog();

void oneDmenu(char* Exercises[], int size)
{
    for(int i=0; i<size; i++)
        printf("[%d] %s\n",i+1, Exercises[i]); 
}

void initializeArray(double arr[], int size)
{
    for(int i = 0; i < size; i++)
        arr[i] = 0.0;
}
void oneDexer_1()
{
    int size = 5;
    double array[size];

    initializeArray(array, size);

    for(int i = 0; i < size; i++)
        printf("%.2f\t", array[i]);

    printf("\n\n");
}


void initializeArrayValues(double arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        double value;
        printf("Enter value of array element %d: ", i);
        scanf("%lf", &value);
        arr[i] = value;
    }
}
void oneDexer_2()
{
    int size;
    printf("Enter array size (0-4): ");
    scanf("%d", &size);

    printf("\n");

    double array[size];
    initializeArrayValues(array, size);

    printf("\n");

    for(int i = 0; i < size; i++)
        printf("%.2f\t", array[i]);

    printf("\n\n");
}
double findLowest(double arr[], int size)
{
    double min = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}


void initializeArrayValuesDecreasing(double arr[], int size)
{
    for(int i = 0; i < size; i++)
        arr[i] = 0.0 - i;
}

void oneDexer_3()
{
    int size;
    printf("Enter array size (0-4): ");
    scanf("%d", &size);

    double array[size];
    initializeArrayValuesDecreasing(array, size);

    for(int i = 0; i < size; i++)
        printf("%.2lf\t", array[i]);

    double min = findLowest(array, size);
    printf("\n\nLowest: %.2lf\n\n", min);
}

double calculateArraySum(double arr[], int size)
{
    double sum = 0.0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}
void oneDexer_4()
{
    int size;
    printf("Enter array size (0-4): ");
    scanf("%d", &size);

    double array[size];
    initializeArrayValuesDecreasing(array, size);

    for(int i = 0; i < size; i++)
        printf("%.2lf\t", array[i]);

    double sum = calculateArraySum(array, size);
    printf("\n\nSum: %.2lf\n\n", sum);
}



int countNegative(double arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
            count++;
    }
    return count;
}
void oneDexer_5()
{
    int size;
    printf("Enter array size (0-4): ");
    scanf("%d", &size);

    double array[size];
    initializeArrayValuesDecreasing(array, size);

    for(int i = 0; i < size; i++)
        printf("%.2lf\t", array[i]);

    int count = countNegative(array, size);
    printf("\n\nCount: %d\n\n", count);
}
int findInteger(int arr[], int size, int x)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == x)
            return 1;
    }
    return 0;
}
void oneDexer_6()
{
    int size;
    printf("Enter array size (0-4): ");
    scanf("%d", &size);

    int array[size];
    for(int i = 0; i < size; i++)
    {
        array[i] = i;
        printf("%d\t", array[i]);
    }

    int x;
    printf("\n\nInput integer to find: ");
    scanf("%d", &x);

    if(findInteger(array, size, x) == 1)
        printf("\n== Integer %d Found inside array! ==\n\n", x);
    else
        printf("\n== Integer %d Not Found inside array! ==\n\n", x);
}

void copyArray(int A[], int B[], int n)
{
    for(int i = 0; i < n; i++)
    {
        B[i] = A[i];
    }
}
void oneDexer_7()
{
    int n = 5;
    int A[] = {10, 20, 30, 40, 50};
    int B[n];

    printf("Array A: ");
    for(int i = 0; i < n; i++)
        printf("%d\t", A[i]);

    copyArray(A, B, n);

    printf("\nArray B: ");
    for(int i = 0; i < n; i++)
        printf("%d\t", B[i]);

    printf("\n\n");
}

void copyArrayReverse(int A[], int B[], int n)
{
    for(int i = 0, j = n - 1; i < n; i++, j--)
    {
        B[j] = A[i];
    }
}
void oneDexer_8()
{
    int n = 5;
    int A[] = {10, 20, 30, 40, 50};
    int B[n];

    printf("Array A: ");
    for(int i = 0; i < n; i++)
        printf("%d\t", A[i]);

    copyArrayReverse(A, B, n);

    printf("\nArray B: ");
    for(int i = 0; i < n; i++)
        printf("%d\t", B[i]);

    printf("\n\n");
}


int compareArrays(int A[], int B[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(A[i] != B[i])
            return 0;
    }
    return 1;
}

void oneDexer_9()
{
    int n = 5;
    int A[] = {10, 20, 30, 40, 50};
    int B[n];

    printf("Array A: ");
    for(int i = 0; i < n; i++)
        printf("%d\t", A[i]);

    copyArray(A, B, n);

    printf("\nArray B: ");
    for(int i = 0; i < n; i++)
        printf("%d\t", B[i]);

    if(compareArrays(A, B, n) == 1)
        printf("\n\nArrays have the same values.\n\n");
    else
        printf("\n\nArrays DON'T have the same values.\n\n");
}


void oneDexit_prog()
{
    printf("Thankyouu\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez.h ft:Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit (0);
}
// This is the main function where the program begins
int oneDmain()
{
    // Print a message to the console to indicate that we are running Binegas 2D Array Exercises
    printf("Binegas 1D Array Exercises:\n");

    // Declare and initialize an array of strings named Exercises
    char* Exercises[] =
    {
        "Exercise 1",
        "Exercise 2",
        "Exercise 3",
        "Exercise 4",
        "Exercise 5",
        "Exercise 6",
        "Exercise 7",
        "Exercise 8",
        "Exit Program"
    };

    // Determine the number of exercises in the array
    int numExercises = sizeof(Exercises)/sizeof(Exercises[0]); 

    // Call the menu function and pass in the Exercises array and the number of exercises
    oneDmenu(Exercises,numExercises);

    // Get an integer value from the user between 1 and 9
    int usersel = get_int(1,9,"Pick an Exercise:");

    // Use a switch statement to determine which exercise the user selected
    switch (usersel)
    {
        // If the user selected Exercise 1, run exer_1 function and print a message to the console
        case 1:
            printf("You Have Chosen 1D Exercise 1\n\n");
            oneDexer_1();
            break;

        // If the user selected Exercise 2, run exer_2 function and print a message to the console
        case 2:
            printf("You Have Chosen 1D Exercise 2\n\n"); 
            oneDexer_2();
            break;

        // If the user selected Exercise 3, run exer_3 function and print a message to the console
        case 3:
            printf("You Have Chosen 1D Exercise 3\n\n");
            oneDexer_3();
            break;

        // If the user selected Exercise 4, run exer_4 function and print a message to the console
        case 4:
            printf("You Have Chosen 1D Exercise 4\n\n");
            oneDexer_4();
            break;

        // If the user selected Exercise 5, run exer_5 function and print a message to the console
        case 5:
            printf("You Have Chosen 1D Exercise 5\n\n");
            oneDexer_5();
            break;

        // If the user selected Exercise 6, run exer_6 function and print a message to the console
        case 6:
            printf("You Have Chosen 1D Exercise 6\n\n");
            oneDexer_6();
            break;

        // If the user selected Exercise 7, run exer_7 function and print a message to the console
        case 7:
            printf("You Have Chosen 1D Exercise 7\n\n");
            oneDexer_7();
            break;

        // If the user selected Exercise 8, run exer_8 function and print a message to the console
        case 8:
            printf("You Have Chosen 1D Exercise 8\n\n");
            oneDexer_8();
            break;

        // If the user selected Exit Program, run the exit_prog function and print a message to the console
        case 9:
            printf("You Have Chosen 1D Exercise 9\n\n");
            oneDexer_9();
            break;

        case 10:
            printf("You Have Chosen to Exit the Program.......\n\n");
            oneDexit_prog();
            break;
        // If the user selected something other than 1-9, do nothing and continue the loop
        default:
            break;
    }

    // Call the main function again to restart the program
    oneDmain();
}