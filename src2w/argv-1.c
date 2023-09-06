#include <stdio.h>
#include <string.h>

void PrintLine(int n);

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("Hello %s\n", argv[i]);

        for (int j = 0, n = strlen(argv[i]); j < n; j++) {
            printf("%c\n", argv[i][j]);
        }
        PrintLine(100);
    }
}

void PrintLine(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}