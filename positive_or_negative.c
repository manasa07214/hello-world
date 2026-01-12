#include<stdio.h>

int main()
{
    int a;
    printf("enter a value of a\n");
    scanf("%d",&a);

    (a > 0) ? printf("a is positive\n") :
              printf("a is negative\n");

    return 0;
}
