/* Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[10];
    printf("Enter string: ");
    scanf("%s",str);

    for (int i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
    return 0;
}