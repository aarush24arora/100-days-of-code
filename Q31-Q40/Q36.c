/*
Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n1, n2, i;
    int hcf = 1; 
    int min;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2) {
        min = n1;
    } else {
        min = n2;
    }

    for (i = 1; i <= min; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i; 
        }
    }
    printf("%d",hcf);

    return 0;
}
