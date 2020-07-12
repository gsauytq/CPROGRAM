#include <stdio.h>

int main() {
    int a,b,c,m,n;

    printf("Enter a fraction :");
    scanf("%d/%d",&a,&b);

    for (m=a,n=b;n!=0;) {
        c=m%n;
        m=n;
        n=c;
    }

    printf("In lowest terms :%d/%d",a/m,b/m);

    return 0;
}