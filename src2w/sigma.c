#include <stdio.h>

int GetInt(void);

int sigma(int n);

int main(void) {
    printf("Enter a number: ");
    int n = GetInt();
    printf("Sigma is %i\n", sigma(n));
}

int GetInt(void) {
    int x;
    scanf("%d", &x);
    return x;
}

int sigma(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return (n + sigma(n - 1));
    }
}