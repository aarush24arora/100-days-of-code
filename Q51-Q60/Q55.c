/*
Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n,prime;
    printf("Enter number to print prime numbers until: ");
    scanf("%d",&n);

    for (int i=2;i<=n;i++){
        prime=1;
        for (int j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
            
        }
        if(prime==1){
            printf("%d ",i);
        }
}
return 0;
}