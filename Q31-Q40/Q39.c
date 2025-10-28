/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int x,product=1,digit;

    printf("enter number: ");
    scanf("%d",&x);

    while (x!=0){
    digit=x%10; 
        if(digit%2!=0){
            product*=digit;
        }
    x=x/10;
    }

    printf("%d",product);
   return 0;
}