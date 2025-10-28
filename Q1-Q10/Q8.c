/*
Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n;
    int sum; 

    printf("Enter a positive integer 'n': ");
    if (scanf("%d", &n) == 1) {
        if (n > 0) {
            sum = (int)n * (n + 1) / 2;
            printf("Sum=%d\n",sum);
        } else {
            printf("Please enter a positive integer (greater than 0).\n");
        }
    } else {
        printf("Invalid input. Please enter a valid integer.\n");
    }

    return 0; 
}
