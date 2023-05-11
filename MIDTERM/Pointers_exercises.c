#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    int i;

    for (i = 0; i < 5; i++)
    {
        arr[i] = 5 - i;
    }

    for (i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}


