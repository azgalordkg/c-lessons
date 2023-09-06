#include <stdio.h>
#include <string.h>

int main(void)
{
    char message[100];

    printf("Please enter your name: ");
    fgets(message, sizeof(message), stdin);

    // Remove newline character from message
    char *newline = strchr(message, '\n');
    if (newline) {
        *newline = '\0';
    }

    if (strcmp(message, "Rus") == 0) {
        printf("%s loh\n", message);
    } else if (strcmp(message, "Aza") == 0) {
        printf("%s is Amazing\n", message);
    } else {
        printf("Hello %s\n", message);
    }

//    printf("%.100f\n", 1.0 / 10.0);

    return 0;
}
