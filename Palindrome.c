#include <stdio.h>

int main()
{
    int num, temp, digit;
    int sum = 0, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reverse of number = %d\n", reverse);

    if (num == reverse)
        printf("The number is a Palindrome\n");
    else
        printf("The number is not a Palindrome\n");

    return 0;
}
