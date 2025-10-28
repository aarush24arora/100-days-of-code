/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int l,b,area,perimeter;
    l=5;
    b=10;
    area=l*b;
    perimeter=2*(l+b);

    printf("Perimeter of rectangle = %d",perimeter);
    printf("\nArea of rectangle = %d",area);

    return 0;
}