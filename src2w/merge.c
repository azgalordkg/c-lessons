#include <stdio.h>
#include <string.h>

int *sort(int arr[8]);

int main(void) {
    int arr[8] = {3, 7, 1, 8, 6, 4, 2, 5};
    sort(arr);
    printf("%i", arr[1]);
}

int *sort(int arr[8]) {
    return arr;
}