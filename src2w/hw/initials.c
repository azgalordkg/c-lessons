#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *GetString();

int main(void) {
    printf("Enter a name: ");
    char *name = GetString();
    for (int i = 0, n = strlen(name); i < n; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c", toupper(name[i]));
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