/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n,digit,factorial=1,sum=0;

    printf("Enter number to check: ");
    scanf("%d",&n);

    int originalnum=n;

    while (n!=0){
    digit=n%10; 
    factorial=1;
    for (int i=2;i<=digit;i++){
        factorial*=i;
    }
    sum+=factorial;
    n=n/10;
    }    

    if(sum==originalnum){
        printf("Strong Number");
    }
    else{
        printf("Not a strong number");
    }
    return 0;
}