/*Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    char binary_string[100];
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary_string);

    printf("1's Complement: ");

    while (binary_string[i] != '\0') {

        if (binary_string[i] == '1') {
            printf("0"); 
        } 
        else if (binary_string[i] == '0') {
            printf("1"); 
        }

        i++;
    }

    printf("\n");

    return 0;
}

