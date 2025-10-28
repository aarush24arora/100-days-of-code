/*
Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int x,sum=0,digit;

    printf("enter number: ");
    scanf("%d",&x);

    while (x!=0){
    digit=x%10; 
    sum+=digit;
    x=x/10;
    }

    printf("%d",sum);
   return 0;
}