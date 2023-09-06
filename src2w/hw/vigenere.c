#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int CheckAlpha(char *k);

char *GetString();

int main(int argc, char *argv[]) {
    char *code = argv[1];
    if ((argc == 1 || argc > 2) && code && CheckAlpha(code)) {
        return 1;
    }

    char *message = GetString();

    int space_count = 0;
    for (int i = 0, n = strlen(message); i < n; i++) {
        char c = message[i];
        if (isalpha(c)) {
            int x = islower(c) ? 97 : 65;
            int encode_char = code[(i - space_count) % strlen(code)];
            int encode_index = encode_char - 97;

            printf("%c", (c + encode_index - x) % 26 + x);
        } else {
            space_count++;
            printf("%c", c);
        }
    }
    printf("\n");
}

int CheckAlpha(char *k) {
    for (int i = 0, n = strlen(k); i < n; i++) {
        if (!isalpha(k[i])) {
            return 0;
        }
    }
    return 1;
}

char *GetString() {
    char *message = malloc(100 * sizeof(char));
    if (message == NULL) {
        perror("Failed to allocate memory");
        exit(1);
    }

    printf("Please enter string: \n");
    fgets(message, 100, stdin);

    // Remove newline character if present
    size_t length = strlen(message);
    if (length > 0 && message[length - 1] == '\n') {
        message[length - 1] = '\0';
    }

    return message;
}