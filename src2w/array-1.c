#include <stdio.h>

int GetInt(void);

int main(void) {
    int n;
    do {
        printf("Enter a number of people in the room: ");
        n = GetInt();
    } while (n < 1);

    int ages[n];
    for (int i = 0; i < n; i++) {
        printf("Age of a person #%i: ", i + 1);
        ages[i] = GetInt();
    }

    printf("Time passes...\n");
    for (int i = 0; i < n; i++) {
        printf("A year from now, person #%i will be %i years old.\n", i + 1, ages[i] + 1);
    }
}

int GetInt(void) {
    int x;
    scanf("%d", &x);
    return x;
}