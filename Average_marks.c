#include <stdio.h>

int main()
{
    int n, i;
    float marks[100], sum = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of students:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }
 
    average = sum / n;

    printf("Average marks = %.2f\n", average);

    return 0;
}
