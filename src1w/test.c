#include <stdio.h>
#include <unistd.h> // for the sleep function

int main() {
    char backslash[] = "\\";

    for (int i = 1; i <= 100; i++) {
        printf("\rCounting: %s", "/");  // \r moves to the beginning of the line
        fflush(stdout);  // Ensure that the output is printed immediately
        sleep(1);  // Wait for one second
        printf("\rCounting: %s", backslash);  // \r moves to the beginning of the line
        fflush(stdout);  // Ensure that the output is printed immediately
        sleep(1);  // Wait for one second
    }
    printf("\n");  // Move to the next line at the end
    return 0;
}
