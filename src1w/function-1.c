#include <stdio.h>

int GetInt();

int GetPositiveNumber();

int main(void) {
    int n = GetPositiveNumber();
    printf("Thanks for the %i!\n", n);
}

int GetInt(void) {
    int x;
    scanf("%d", &x);
    return x;
}

int GetPositiveNumber(void) {
    int n;
    do {
        printf("Please give me a positive int: ");
        n = GetInt();
    } while (n < 1);
    return n;
}