#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* GetString();

int main(void) {
    char* s = GetString();

    for (int i = 0, n = strlen(s); i < n; i++) {
        printf("%c\n", s[i]);
    }
}

char* GetString() {
    char* message = malloc(100 * sizeof(char));
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