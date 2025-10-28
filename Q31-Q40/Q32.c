/*
Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int x,original,rev=0,digit;

    printf("enter number: ");
    scanf("%d",&x);

    original=x;

    while (x!=0){
    digit=x%10; 
    rev=rev*10 + digit;
    x=x/10;
    }
    if(original==rev){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
   return 0;
}