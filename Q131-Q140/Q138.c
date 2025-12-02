/* Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>
enum loop{
    RED,
    YELLOW,
    GREEN,
};
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char *color[3]={"RED","YELLOW","GREEN"};
    for(enum loop i=RED;i<=GREEN;i++){
        printf("%s=%d\n", color[i], i);
    }
    return 0;
}