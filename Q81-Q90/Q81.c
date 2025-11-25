/* Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

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
    printf("%d",count);

    return 0;
}