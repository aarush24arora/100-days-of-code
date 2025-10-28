/*
Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n,factorial=1;

    printf("Enter number to check factorial: ");
    scanf("%d",&n);

    for (int i=2;i<=n;i++){
        factorial=factorial * i;
    }

    printf("%d",factorial);

    return 0;
}