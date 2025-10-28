/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h> 

int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("The value of 'a' cannot be zero in a quadratic equation.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are Real and Different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }

    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }

    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        
        printf("Roots are Complex and Different.\n");
        printf("Root 1 = %.2lf + i%.2lf\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - i%.2lf\n", realPart, imaginaryPart);
    }

    return 0;
}
