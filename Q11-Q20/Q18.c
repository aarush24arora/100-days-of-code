/*
Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int percentage;

    printf("Enter percentage: ");
    scanf("%d",&percentage);

    if(percentage<=100 && percentage>=90){
        printf("Grade A");
    }
    else if(percentage<=89 && percentage>=80){
        printf("Grade B");
    }
    else if(percentage<=79 && percentage>=70){
        printf("Grade C");
    }
    else if(percentage<=69 && percentage>=60){
        printf("Grade D");
    }
    else if(percentage<60){
        printf("Grade F");
    }

    return 0;
}