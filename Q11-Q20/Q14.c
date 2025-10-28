/*
Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    char check;
    printf("Enter letter to be checked: ");
    scanf("%c",&check);

    if (check=='a' || check=='e' || check=='i' || check=='o' || check=='u'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }

    return 0;
}