/*
Q11: Write a program to input an integer and check whether it is even or odd using if–else.

Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int x;

printf("enter number to be checked: ");
scanf("%d",&x);

if (x%2==0){
    printf("%d is even",x);
}
else
{
    printf("%d is odd",x);
}
return 0;
}