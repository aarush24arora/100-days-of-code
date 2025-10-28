/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int num, swappednum;
    int firstdigit, lastdigit, middledigits;
    int poweroften = 1; 
    int temp; 

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10) {
        swappednum = num;
    } else {
        lastdigit = num % 10;

        temp = num; 
        while (temp >= 10) {
            temp = temp / 10;
            poweroften = poweroften * 10;
        }

        firstdigit = temp; 

        middledigits = (num % poweroften) / 10;

        swappednum = (lastdigit * poweroften) + (middledigits * 10) + firstdigit;
    }

    printf("Original number: %d\n", num);
    printf("Swapped number:  %d\n", swappednum);

    return 0;
}

