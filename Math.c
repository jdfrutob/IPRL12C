#include <stdio.h>

int main() {
    int numRows = 30;
    int row, col, coef;

    for (row = 0; row < numRows; row++) {
        coef = 1;
        for (col = 0; col <= row; col++) {
            printf("%d\t\t\t", coef);
            coef = coef * (row - col) / (col + 1);
        }
        printf("\n\n");
    }

    return 0;
}


