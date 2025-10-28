/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    for (int i=1;i<=4;i++){
        for (int k=1;k<=(4-i);k++){
            printf(" ");
        }
    
        for (int j=1;j<=(i*2)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=3;i>=1;i--){
        for (int k=1;k<=(4-i);k++){
            printf(" ");
        }
    
        for (int j=(i*2)-1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
