/* Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[50];
    printf("Enter a string: ");
    scanf("%s",str);
    int count=0;
    for (int i=0;str[i]!='\0';i++){
        count++;
    }
    for (int i=count;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}