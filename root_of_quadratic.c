#include <stdio.h>                                        
#include <math.h>

int main()
{
    float a, b, c, D;
    float root1, root2;
    float realPart, imagPart;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Two different real roots:\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2*a);
        printf("Two equal real roots:\n");
        printf("Root = %.2f\n", root1);
    }
    else
    {
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);
        printf("Complex roots:\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
