/* Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>
enum month{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,
};
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char m[10];
    printf("Enter Month: ");
    scanf("%s",m);

    if (strcmp(m,"JAN") == 0 || strcmp(m,"MAR") == 0 || strcmp(m,"MAY") == 0 || strcmp(m,"JUL") == 0 || strcmp(m,"AUG") == 0 || strcmp(m,"OCT") == 0 || strcmp(m,"DEC") == 0){
        printf("31 days");
    }
    else if(strcmp(m,"FEB") == 0){
        printf("28 or 29 days");
    }
    else{
        printf("30 days");
    }
    return 0;
}