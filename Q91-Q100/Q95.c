/* Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char s1[50], s2[50];
    scanf("%s", s1);
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not rotation");
        return 0;
    }

    char temp[100];
    strcpy(temp, s1);
    strcat(temp, s1);  

    if(strstr(temp, s2) != NULL) {
        printf("Rotation");
    }
    else {
        printf("Not rotation");
    }

    return 0;
}
