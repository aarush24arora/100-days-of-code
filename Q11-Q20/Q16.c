/*
Q16: Write a program to input three numbers and find the largest among them using if–else.

Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int num1,num2,num3,largest;
    printf("Enter numbers to be checked: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2 && num1>num3){
        largest=num1;
    }
    else if (num2>num1 && num2>num3){
        largest=num2;
    }
    else{
        largest=num3;
    }

    printf("largest is %d",largest);
    return 0;
}