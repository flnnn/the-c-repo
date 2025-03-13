#include <stdio.h>

void fillArray(int a[], int length);
void printArray(int a[], int length);

int main(void) {
    int arr[5];
    fillArray(arr, 5);
    printArray(arr, 5);
}

void fillArray(int a[], int length) {
    int i;
    for (i = 0; i < length; i++) {
        a[i] = (i + 1) * 10;
    }
    printf("[+] array filled.\n");
}

void printArray(int a[], int length) {
    int i;
    printf("[!] printing...\n\n");
    for (i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
