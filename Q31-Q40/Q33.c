/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n, originalNumber, remainder;
    int digitCount = 0;
    int result = 0; 
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNumber = n;
    int temp = n;

    do {
        temp = temp / 10;
        digitCount++;
    } while (temp != 0);

    temp = n; 
    
    while (temp != 0) {

        remainder = temp % 10;
        result = result + (int)pow(remainder, digitCount);
        temp = temp / 10;
    }

    if (result == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}

