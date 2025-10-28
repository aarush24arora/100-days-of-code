/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int x;

    printf("Enter number to check: ");
    scanf("%d",&x);
    if (x <= 1) {
        printf("Not Prime");
        return 0;
    }
    for (int i=2;i<x;i++){
        if(x%i==0){
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime");

    return 0;
}