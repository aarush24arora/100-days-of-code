/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n1, n2,lcm;
    int hcf = 1; 
    int min;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2) {
        min = n1;
    } else {
        min = n2;
    }

    for (int i = 1; i <= min; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i; 
        }
    }

    lcm=(n1*n2)/hcf;

    printf("%d",lcm);

    return 0;
}
