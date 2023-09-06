#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *GetString();

int main(int argc, char *argv[]) {
    if (argc == 1 || argc > 2) {
        return 1;
    }
    int k = atoi(argv[1]);

    printf("Enter a text: ");
    char *p = GetString();

    for (int i = 0, n = strlen(p); i < n; i++) {
        char c = p[i];
        if (isalpha(c)) {
            int x = 65;
            if (islower(c)) {
                x = 97;
            }
            printf("%c", (c + k - x) % 26 + x);
        } else {
            printf("%c", c);
        }
    }
    printf("\n");
}

char *GetString() {
    char *message = malloc(100 * sizeof(char));
    if (message == NULL) {
        perror("Failed to allocate memory");
        exit(1);
    }

    printf("Please enter string: ");
    fgets(message, 100, stdin);

    // Remove newline character if present
    size_t length = strlen(message);
    if (length > 0 && message[length - 1] == '\n') {
        message[length - 1] = '\0';
    }

    return message;
}