/*
Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int x,sum=0;

    printf("Enter number: ");
    scanf("%d",&x);

    for (int i = 1; i < x; ++i) {
        if (x % i == 0) {
            sum+=i;
        }
    }

    if(sum==x){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
    return 0;
}
