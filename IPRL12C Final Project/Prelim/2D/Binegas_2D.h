#define rows 2
#define cols 3
void twoDmenu (char* Exercises[], int size);
void twoDexer_1();
void twoDexer_2();
void twoDexer_3();
void twoDexer_4();
void twoDexer_5();
void twoDexer_6();
void twoDexer_7();
void twoDexer_8();


void twoDmenu(char* Exercises[], int size)
{
    for(int i=0; i<size; i++)
        printf("[%d] %s\n",i+1, Exercises[i]); 
}

void intitializeto_0(double a[rows][cols])
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			a[i][j] = 0.0;
			printf("%f ",a[i][j]);
		}		
		printf("\n");	
	}
}
//Write a function that will initialize the contents of a double data type 2D array to 0.0. Pass the array as parameter.
void twoDexer_1()
{
	printf("Binegas 2D Array Act#1\n\n");
	double a [rows][cols];
	intitializeto_0(a);
	printf("\n");
}
void userinput(double a[rows][cols])
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
            printf("Input Value for Array elements[%d][%d]: ", i,j);
            scanf("%lf",&a[i][j]);
		}		
		printf("\n");	
	}
    for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
            printf("%.2f ", a[i][j]);     		
        printf("\n");	
	}
}
//Same as the problem above, but allow the user to input the value of the array element via scanf() statement.
void twoDexer_2()
{
	printf("Binegas 2D Array Act#2\n\n");
	double a [rows][cols];
	userinput(a);
	printf("\n");
}
void printaelm(int A[5][3])
{
	for (int i = 0; i < 5; i++)
	{
        for (int j = 0; j < 3; j++)
			printf("%d  ", A[i][j]);
		printf("\n");    
	}
}
//Write a function that will display all the elements of the 2D array. Elements should be printed starting from the 
//first row up to the last row, and from the first column to the last column within the same row. Elements of the 
//same row should be printed on the same line separated by two spaces. Pass the array as parameter.
void twoDexer_3()
{
	printf("Binegas 2D Array Act#3\n\n");
	int A[5][3] = {{-2, -4, -6}, {-8, 10, 12}, {14, 16, 18}, {20, 22, 24}, {26, 28, 30}};
	printaelm(A);
}
//Write a function that will return the number of negative elements in the 2D array. Pass the array as parameter.
int countnegelm(int A[5][3])
{
    int count = 0;
    for (int i = 0; i < 5; i++)
	{
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] < 0)
                count++;
        } 
	}
   
    return count;
}
void twoDexer_4()
{
    printf("Binegas 2D Array Act#4\n\n");
    printf("Ref Array\n");
    int A[5][3] = {{-2, -4, -6}, {-8, 10, 12}, {-3, -7, -9}, {20, 22, 24}, {26, 28, 30}};
    for (int i = 0; i < 5; i++)
	{
        for (int j = 0; j < 3; j++)
			printf("%d\t", A[i][j]);
		printf("\n");    
	}
	printf("\n");

    int count = countnegelm(A);
    printf("The count of negative element is: %d\n",count);

}
void maindiag(int A [rows][cols])
{
	printf("Diagonal elements: \n");
	for (int i = 0; i < 5; i++)
	{
        for (int j = 0; j < 3; j++)	
		{
            if (i == j) 
                printf("%d\t", A[i][j]);
            else
            	printf("\t");
		}
		printf("\n");
	}
}
//Write a function that will print only the elements on the main diagonal of the 2D array. Pass the array as parameter.
void twoDexer_5()
{
	printf("Binegas 2D Array Act#5\n\n");
	printf("Ref Array\n");
    int A[5][3] = {{-2, -4, -6}, {-8, 10, 12}, {-3, -7, -9}, {20, 22, 24}, {26, 28, 30}};
	for (int i = 0; i < 5; i++)
	{
        for (int j = 0; j < 3; j++)
			printf("%d\t", A[i][j]);
		printf("\n");    
	}
	printf("\n");

	maindiag(A);
}
void sumrow (int A[5][3])
{
	for (int i = 0; i < 5; i++)
	{
        for(int j = 0; j < 3; j++) 
            printf("%d\t", A[i][j]);
		printf("\n");    
	}
	int rowselect;
	printf("Enter a Desired Row: ");
	scanf("%d",&rowselect);
	 if(rowselect < 0 || rowselect >= 5)
    	printf("Invalid row selection.\n");
	else
	{
		int sumrow = 0;
		for (int j = 0; j < 3; j++)
   		{
        	sumrow += A[rowselect][j];
   		}
    printf("The sum of row %d is %d.\n", rowselect, sumrow);
	}
}
// Write a function that will return the sum of the elements on a specified row. Pass the array and the row as parameters
void twoDexer_6()
{
    printf("Binegas 2D Array Act#6\n\n");
	int A[5][3] = {{-2, -4, -6}, {-8, 10, 12}, {-3, -7, -9}, {20, 22, 24}, {26, 28, 30}};
	sumrow(A);
}
void sumcol (int A[5][3])
{
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        	printf("%d\t", A[i][j]);
        printf("\n");    
    }
    int colselect;
    printf("Enter a Desired Column (0-%d): ", 3-1);
    scanf("%d",&colselect);
    
    if(colselect < 0 || colselect >= 3)
    	printf("Invalid column selection.\n");
    
    else
    {
        int sumcol = 0;
        for(int i = 0; i < 5; i++)
        	sumcol += A[i][colselect];
        printf("The sum of column %d is %d.\n", colselect, sumcol);
    }
    
}
//Write a function that will return the sum of the elements on a specified column. Pass the array and the column as parameters.
void twoDexer_7()
{
    printf("Binegas 2D Array Act#7\n\n");
    int A[5][3] = {{-2, -4, -6}, {-8, 10, 12}, {-3, -7, -9}, {20, 22, 24}, {26, 28, 30}};
    sumcol(A);
}
void matrixsum(int A[rows][cols],int B[rows][cols],int C[rows][cols])
{
     printf("Array A:\n\n");
    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        	printf("%d\t", A[i][j]);
        printf("\n");    
    }
    printf("\nArray B:\n\n");
    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        	printf("%d\t", B[i][j]);
        printf("\n");    
    }

    printf("\nArray C:\n\n");
    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d\t", C[i][j]);
        }
        	
        printf("\n");    
    } 
}
//assume three matrices of the same size, say matrix A, B and C.
//Write a function that will add the two matrices A and B and store the sum to C.
void twoDexer_8()
{
    printf("Binegas 2D Array Act#8\n\n");
    int A[rows][cols] = {{5, 10, 15}, {2, 4, 6}};
    int B[rows][cols] = {{1, 2, 3}, {3, 6, 9}};
    int C[rows][cols];
    matrixsum(A,B,C);
}

void twoDmain()
{
    // Print a message to the console to indicate that we are running Binegas 2D Array Exercises
    printf("Binegas 2D Array Exercises:\n");

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
        "Go Back to Prelim Menu"
    };

    // Determine the number of exercises in the array
    int numExercises = sizeof(Exercises)/sizeof(Exercises[0]); 

    // Call the menu function and pass in the Exercises array and the number of exercises
    twoDmenu(Exercises,numExercises);

    // Get an integer value from the user between 1 and 9
    int usersel = get_int(1,9,"Pick an Exercise: ");

    // Use a switch statement to determine which exercise the user selected
    switch (usersel)
    {
        // If the user selected twoDexercise 1, run twoDexer_1 function and print a message to the console
        case 1:
            system("cls");
            printf("You Have Chosen 2D Exercise 1\n\n");
            twoDexer_1();
            break;

        // If the user selected twoDexercise 2, run twoDexer_2 function and print a message to the console
        case 2:
            system("cls");
            printf("You Have Chosen 2D Exercise 2\n\n"); 
            twoDexer_2();
            break;

        // If the user selected twoDexercise 3, run twoDexer_3 function and print a message to the console
        case 3:
            system("cls");
            printf("You Have Chosen 2D Exercise 3\n\n");
            twoDexer_3();
            break;

        // If the user selected twoDexercise 4, run twoDexer_4 function and print a message to the console
        case 4:
            system("cls");
            printf("You Have Chosen 2D Exercise 4\n\n");
            twoDexer_4();
            break;

        // If the user selected twoDexercise 5, run twoDexer_5 function and print a message to the console
        case 5:
            system("cls");
            printf("You Have Chosen 2D Exercise 5\n\n");
            twoDexer_5();
            break;

        // If the user selected twoDexercise 6, run twoDexer_6 function and print a message to the console
        case 6:
            system("cls");
            printf("You Have Chosen 2D Exercise 6\n\n");
            twoDexer_6();
            break;

        // If the user selected twoDexercise 7, run twoDexer_7 function and print a message to the console
        case 7:
            system("cls");
            printf("You Have Chosen 2D Exercise 7\n\n");
            twoDexer_7();
            break;

        // If the user selected twoDexercise 8, run twoDexer_8 function and print a message to the console
        case 8:
            system("cls");
            printf("You Have Chosen 2D Exercise 8\n\n");
            twoDexer_8();
            break;

        // If the user selected Exit Program, run the exit_prog function and print a message to the console
        case 9:
            system("cls");
            printf("You Have Chosen to Go Back to Prelim Menu.......\n\n");
            return;
            break;

        // If the user selected something other than 1-9, do nothing and continue the loop
        default:
            break;
    }

    // Call the main function again to restart the program
    twoDmain();
}