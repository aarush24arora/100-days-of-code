/*
Q35: Write a program to print all factors of a given number.

Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int x;

    printf("Enter number to factorize: ");
    scanf("%d",&x);
    printf("Factors of %d are: ", x);

    for (int i = 1; i <= x; ++i) {
        if (x % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
