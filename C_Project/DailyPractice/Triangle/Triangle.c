#include <stdio.h>

int main(void) {
    int j, i;

    for (i = 0; i < 10; i++)
    {
        for (j = 1; j <= 10 - i - 1; j++)
            printf(" ");
        for (j = 0; j <= 2 * i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}