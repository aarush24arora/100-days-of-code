/* Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>
enum traffic{
    RED,
    YELLOW,
    GREEN,
};
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char c[10];
    printf("Enter Traffic Light (GREEN/YELLOW/RED): ");
    scanf("%s",c);

    if (strcmp(c, "RED") == 0) {
        printf("Stop");
    }
    else if (strcmp(c, "YELLOW") == 0) {
        printf("Wait");
    }
    else if (strcmp(c, "GREEN") == 0) {
        printf("Go");
    }
    else {
        printf("Invalid Input");
    }

    return 0;
}