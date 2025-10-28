/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int cp,sp,profit,pp;

    printf("Enter cost and selling prices: ");
    scanf("%d%d",&cp,&sp);

    profit=sp-cp;
    pp=(profit*100)/cp;

    if(pp>0){
        printf("Profit %d%%",pp);
    }
    else if(pp<0){
        printf("Loss %d%%",pp*-1);
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}