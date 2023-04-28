#include <stdio.h>
#include <string.h>
int main()
{
    struct Studenttemp
    {
        int idnum;
        char name[100];

    };

    struct Studenttemp student1;
    student1.idnum = 1234;
    strcpy(student1.name ,"Binegas");

    struct Studenttemp student2;
    student2.idnum = 5678;
    strcpy(student2.name, "Valdez");

    printf("\nID Number: %d\nSurname : %s\n\n",student1.idnum, student1.name);
    printf("ID Number: %d\nSurname : %s\n\n",student2.idnum, student2.name);
}