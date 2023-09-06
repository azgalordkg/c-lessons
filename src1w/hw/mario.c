#include <stdio.h>

int GetInt(void);

int GetPositiveInt(char *message);

void RenderPyramid(int n);

int main(void) {
    int height = GetPositiveInt("height: ");
    RenderPyramid(height);
}

int GetInt(void) {
    int x;
    scanf("%d", &x);
    return x;
}

int GetPositiveInt(char *message) {
    int x;
    do {
        printf("%s", message);
        x = GetInt();
    } while (x <= 0 || x >= 23);
    return x;
}

void RenderPyramid(int n) {
    for (int i = n; i > 0; i--) {
        for (int x = 1; x < n + 2; x++) {
            if (x < i) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
}

//   ## 3
//  ### 2
// #### 1