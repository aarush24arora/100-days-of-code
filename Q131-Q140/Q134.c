/* Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

enum status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char s[10];
    printf("Enter status: ");
    scanf("%s", s);

    if(strcmp(s,"SUCCESS")==0){
        printf("Operation Successful!");
    }
    else if(strcmp(s,"FAILURE")==0){
        printf("Operation Failed.");
    }
    else if(strcmp(s,"TIMEOUT")==0){
        printf("Timed Out.");
    }
    else{
        printf("Invalid Input.");
    }
    return 0;
}
