/*
Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int duedays,fine;

    printf("Enter due days: ");
    scanf("%d",&duedays);
    if(duedays<=0){
        printf("No fine");
    }
    else if(duedays<=5){
        fine=2*duedays;
        printf("Fine Rs.%d",fine);
    }
    else if(duedays>5 && duedays<=10){
        fine=(5*2)+((duedays-5)*4);;
        printf("Fine Rs.%d",fine);
    }
    else if(duedays>10 && duedays<=30){
        fine=(5*2)+(5*4)+((duedays-10)*6);
        printf("Fine Rs.%d",fine);
    }
    else if(duedays>30){
        printf("Membership Cancelled");
    }
    return 0;
}