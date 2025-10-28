/*
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    for (int i=5;i>=1;i--){
        for (int k=1;k<=(5-i);k++){

            printf(" ");
        }
        {
            for (int j=i;j>=1;j--){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}