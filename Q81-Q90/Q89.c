/* Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[50];
    char ch;
    printf("Enter string and charcter to find frequency of: \n");
    scanf("%s\n%c",str,&ch);
    int count=0;
    for (int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}