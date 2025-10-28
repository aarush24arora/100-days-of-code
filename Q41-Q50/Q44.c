/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n, i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        if (i == 1) {
            sum += 1.0;
        } else {
            
            numerator = (2.0 * i) - 1.0;
            denominator = 2.0 * i;
            
            sum += (numerator / denominator);
        }
    }

    printf("Approximate sum: %.1lf\n",sum);

    return 0;
}
