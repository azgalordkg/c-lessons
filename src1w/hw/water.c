#include <stdio.h>

int GetInt(void);

int main(void) {
    int bottles_per_minute = 12;
    printf("waterminutes: ");
    int minutes = GetInt();
    printf("bottles: %i\n", minutes * bottles_per_minute);
}

int GetInt(void) {
    int x;
    scanf("%d", &x);
    return x;
}