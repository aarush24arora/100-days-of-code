/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int totalseconds, hours, minutes, seconds;

    printf("Enter time in total seconds: ");
    scanf("%d", &totalseconds);

    hours = totalseconds / 3600;

    int remainingseconds = totalseconds % 3600;

    minutes = remainingseconds / 60;

    seconds = remainingseconds % 60;

    printf("\nConverted time:\n");
    printf("HH:MM:SS = %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}