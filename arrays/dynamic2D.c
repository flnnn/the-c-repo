/* 
   This program uses the programmer friendly approach
   in which the matrix elements can be referenced by using
   the common syntax "[][]".
*/
#include <stdio.h>
#include <stdlib.h>

void fillMatrix(int **m);
void printMatrix(int **m);

int main(void) {
    int **matrix;
    int i;

    matrix = malloc(sizeof(int *) * 5);
    if (matrix == NULL) {
        printf("[!] malloc failed, exiting...\n");
        exit(1);
    }

    for (i = 0; i < 5; i++) {
        matrix[i] = malloc(sizeof(int) * 5);
    }

    fillMatrix(matrix);
    printMatrix(matrix);

    free(matrix);
    matrix = NULL;

    return 0;
}

void fillMatrix(int **m) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                m[i][j] = 1;
            } else {
                m[i][j] = 0;
            }
        }
    }
    printf("[+] matrix filled.\n");
}

void printMatrix(int **m) {
    int i, j;
    printf("[!] printing...\n\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
