#include <stdio.h>
void printarray(int a[2][6],int rows,int cols)
{
    for(int i =0;i<rows;i++)
    {
        for(int j =0;j<cols;j++)
            printf("[%d]\n",a[i][j]);
        printf("\n");
    }
        
}
void lineararray(int *a,int size)
{
    for(int i =0;i<size;i++)
        printf("%d\n",*(a + i));
    printf("\n");
}
int main()
{
    int a[][6] = {{1,2,3,4,5,6},{1,2,3,4,5,6}};
    int size = sizeof(a)/sizeof(a[0][0]);
    int rows = sizeof(a)/sizeof(a[0]);
    int cols = sizeof(a[0])/sizeof(a[0][0]);

    printf("Size: %d\n",size);
    printf("Rows: %d\n",rows);
    printf("Cols: %d\n",cols);
    int *ptr = &a[0][0];
    printarray(a,rows,cols);
    lineararray(ptr2,size);
}