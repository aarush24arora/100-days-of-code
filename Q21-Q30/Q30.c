/*
Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int x,rev=0,digit;

    printf("enter number: ");
    scanf("%d",&x);

    while (x!=0){
    digit=x%10; 
    rev=rev*10 + digit;
    x=x/10;
    }
    
    printf("%d",rev);
   return 0;
}