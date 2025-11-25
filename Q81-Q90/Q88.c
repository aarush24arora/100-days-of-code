/* Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    for (int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str[i]='-';
        }
    }
    printf("%s",str);

    return 0;
}