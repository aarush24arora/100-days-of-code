/*
Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int num;
    printf("Enter integer to be checked: ");
    scanf("%d",&num);
        if (num>0){
            printf("Positive");
        }
        else if (num<0){
            printf("Negative");
        }
        else{
            printf("Zero");
        }
    return 0;
}
