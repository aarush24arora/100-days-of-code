/* Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d", &n);

    int total = n * (n + 1) / 2;

    int lsum = 0;
    for(int x = 1; x <= n; x++){
        lsum += x;                   
        int rsum = total - (lsum - x); 
        if(lsum == rsum){
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}