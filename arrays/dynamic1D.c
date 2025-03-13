#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr;

    arr = malloc(sizeof(int) * 5);
    if (arr == NULL) {
        printf("[!] malloc failed, exiting...\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 100;
    }

    printf("[+] array filled.\n");
    printf("[!] printing...\n\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}
