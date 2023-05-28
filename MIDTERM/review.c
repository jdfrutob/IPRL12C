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

int main ()
{
    printf("Student Record 1 Name: %s\n",students[0].student_name);
    printf("Student Record 1 Student Number: %s\n",students[0].student_number);
    printf("Student Record 1 Year Level: %s\n\n",students[0].Year_Level);


    printf("Student Record 2 Name: %s\n",students[1].student_name);
    printf("Student Record 2 Student Number: %s\n",students[1].student_number);
    printf("Student Record 2 Year Level: %s\n\n",students[1].Year_Level);

}