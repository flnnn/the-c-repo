#include <stdio.h>

int total = 5;

void fillMatrix(int matrix[][total]);
void printMatrix(int matrix[][total]);

int main(void) {
    int matrix[total][total];
    fillMatrix(matrix);
    printf("[!] printing...\n\n");
    printMatrix(matrix);
    return 0;
}

void fillMatrix(int matrix[][total]) {
    int i, j;
    for (i = 0; i < total; i++) {
        for (j = 0; j < total; j++) {
            if (i == j) {
                matrix[i][j] = 1; 
            } else {
                matrix[i][j] = 0;
            }
        }
    }
    printf("[+] matrix filled.\n");
}

void printMatrix(int matrix[][total]) {
    int i, j;
    for (i = 0; i < total; i++) {
        for (j = 0; j < total; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
