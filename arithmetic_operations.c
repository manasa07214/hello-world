#include <stdio.h>

int main() {
    int a, b;
    int sum, sub, mul;
    float div;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;

    printf("Addition = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);

    if (b != 0) {
        div = (float)a / b;
        printf("Division = %.2f\n", div);
    } else {
