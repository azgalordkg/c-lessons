#include <stdio.h>

float GetFloat(void);
float GetChange(float cents);

int main(void) {
    printf("O hai! How much change is owed?\n");
    float x = GetFloat();
    float cents = x * 100;
    int count = 0;

    do {
        cents = GetChange(cents);
        count++;
    } while (cents > 0);

    printf("%i\n", count);
}

float GetChange(float cents) {
    if (cents >= 25) {
        return cents - 25;
    } else if (cents >= 10) {
        return cents - 10;
    } else if (cents >= 5) {
        return cents - 5;
    } else {
        return cents - 1;
    }
}

float GetFloat(void) {
    float x;
    scanf("%f", &x);
    return x;
}

// A 1000001 -> 65
// z 1111010 -> 122
// a 1100001 -> 97
// m 1101101 -> 109
// a 1100001 -> 97
// t 1110100 -> 116

// Azamat = 1000001 1111010 1100001 1101101 1100001 1110100