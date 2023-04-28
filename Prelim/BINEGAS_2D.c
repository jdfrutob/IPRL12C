#include<stdio.h>
#include<stdlib.h>
#include "valdez.h"
#define rows 2
#define cols 3
void menu (char* Exercises[], int size);
void exer_1();
void exer_2();
void exer_3();
void exer_4();
void exer_5();
void exer_6();
void exer_7();
void exer_8();
void exit_prog();
int main()
{
    printf("Binegas 2D Array Exercises:\n");
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
    int numExercises = sizeof(Exercises)/sizeof(Exercises[0]); 
    menu(Exercises,numExercises);
    int usersel = get_int("Pick an Exercise: ","123456789\n",1,9);

    switch (usersel)
    {
        case 1:
            printf("You Have Chosen Exercise 1\n\n");
            exer_1();
            break;

        case 2:
            printf("You Have Chosen Exercise 2\n\n"); 
            exer_2();
            break;
        
        case 3:
            printf("You Have Chosen Exercise 3\n\n");
            exer_3();
            break;

        case 4:
            printf("You Have Chosen Exercise 4\n\n");
            exer_4();
            break;
        
        case 5:
            printf("You Have Chosen Exercise 5\n\n");
            exer_5();
            break;
        
        case 6:
            printf("You Have Chosen Exercise 6\n\n");
            exer_6();
            break;
        
        case 7:
            printf("You Have Chosen Exercise 7\n\n");
            exer_7();
            break;

        case 8:
            printf("You Have Chosen Exercise 8\n\n");
            exer_8();
            break;

        case 9:
            printf("You Have Chosen to Exit the Program.......\n\n");
            exit_prog();
            break;

        default:
            break;
    }
    main();
}
void menu(char* Exercises[], int size)
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
void exer_1()
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
void exer_2()
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
void exer_3()
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
void exer_4()
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
void exer_5()
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
        for (int j = 0; j < 3; j++)
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
void exer_6()
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
void exer_7()
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
void exer_8()
{
    printf("Binegas 2D Array Act#8\n\n");
    int A[rows][cols] = {{5, 10, 15}, {2, 4, 6}};
    int B[rows][cols] = {{1, 2, 3}, {3, 6, 9}};
    int C[rows][cols];
    matrixsum(A,B,C);
}
void exit_prog()
{
    printf("Thankyouu\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez.h ft:Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit (0);
}