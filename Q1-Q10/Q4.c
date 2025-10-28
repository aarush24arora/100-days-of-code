/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    double r,area,c;
    r=3;
    area=(3.14f)*r*r;
    c=2*(3.14f)*r;

    printf("Area of circle = %0.2lf",area);
    printf("\nCircumference of circle = %0.2lf",c);

    return 0;
}