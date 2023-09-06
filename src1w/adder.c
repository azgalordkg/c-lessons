#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Give me an integer: ");
    scanf("%d", &x);
    printf("Give me another integer: ");
    scanf("%d", &y);

    printf("The sum of %i and %i is %i! \n", x, y, x + y);
}