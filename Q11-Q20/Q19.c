/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int a,b,c;

    printf("enter the sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);

    if (((a+b)>c)&&((b+c)>a)&&((c+a)>b)){
        printf("the triangle is valid\n");
    }
    else{
        printf("the triangle is not valid\n");
        return 0;
    }
    if (a==b && b==c){
        printf("the triangle is equilateral\n");
    }
    else if ((a==b)||(b==c)||(c==a)){
        printf("the triangle is isosceles\n");
    }
    else {
        printf("the triangle is scalene\n");
    }
    return 0;
    }