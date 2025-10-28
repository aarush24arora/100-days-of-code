/*
Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int year;
    printf("Enter year to be checked: ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || (year%400==0)){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}