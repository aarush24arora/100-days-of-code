/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    double principal,rate,time,si,ci,amount;

    printf("Enter Principal, Rate(in decimal), Time: ");
    scanf("%lf%lf%lf",&principal,&rate,&time);

    si=(principal*rate*time)/100.0f;
    amount=principal*pow((1+rate/100.0f),time);
    ci=amount-principal;

    printf("Simple interest:%.2lf\nCompound interest:%.2lf",si,ci);
    
    return 0;
}