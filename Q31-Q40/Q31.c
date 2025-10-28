/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n;

    printf("Enter a number to convert to binary: ");
    scanf("%d", &n);

    for (int i = 3; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");

    return 0;
}

