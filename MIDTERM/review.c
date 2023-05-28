#include <stdio.h>

typedef struct Student_Accounts {
    char *student_name;
    char *student_number;
    char *Year_Level;
} Student_Accounts;

Student_Accounts students []= {
    {"Jandell Ang","2022-1-0155","1st Year"},
    {"Bermard Velez","2022-1-0154","1st Year"}
};



void Print_Student_Accounts() 
{
    for (int i = 0; i < 2; i++) 
        printf("%s %s %s\n", students[i].student_name, students[i].student_number, students[i].Year_Level);
}
 
void Print_Salary()
{
    float salary;
    float *psalary;

    salary = 5000;
    psalary = &salary;

    printf("Enter Salary: ");
    scanf("%f\n",psalary);

    printf("Salary: %f",*psalary);
}
int main ()
{
    Print_Student_Accounts();
    printf("\n\n\n");
    Print_Salary();
}