#include <stdio.h>

typedef struct{
    char *student_name;
    char *student_number;
    char *Year_Level;
} Student_Accounts;

Student_Accounts students []= {
    {"John Doe","2022-1-0155","1st Year"},
    {"Jane Doe","2022-1-0154","1st Year"}
};



void Print_Student_Accounts() 
{
    for (int i = 0; i < 2; i++) 
        printf("%s %s %s\n", students[i].student_name, students[i].student_number, students[i].Year_Level);
}
 
void Print_Salary()
{
   float salary;
    float* ptr_salary;

    salary = 5000;
    ptr_salary = &salary;

    printf("Enter Salary: ");
    scanf("%f", ptr_salary);

    printf("Salary: %.2f", *ptr_salary);
}

void print_array() {
    float numbers[] = {1.5, 2.0, 3.5, 4.0, 5.5, 6.0, 7.5, 8.0, 9.5, 10.0};
    float product = 1.0;
    float *ptr_product;
    ptr_product = &product;

    for (int i = 0; i < 10; i++) 
        product *= numbers[i];

    printf("Product: %.2f", *ptr_product);
}

int main ()
{
    printf("\n\n");
    Print_Student_Accounts();
    printf("\n\n\n");
    Print_Salary();
    printf("\n\n\n");
    print_array();
}