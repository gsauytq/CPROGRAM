#include <stdio.h>

int main(void)
{
    int a,b,i;

    printf("Enter number of days in month :");
    scanf("%d",&a);

    printf("Enter starting day of the week (1=sum, 7=sat) :");
    scanf("%d",&b);

    for (i=1;i<b;i++) {
        printf("    ");
    }
    for (i=1;i<=a;i++) {
        printf("%4d",i);
        if ((b+i-1)%7==0) {
            printf("\n");
        }
    }
    return 0;
}