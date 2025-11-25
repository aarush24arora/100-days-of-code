/* Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[10];
    printf("Enter string: ");
    scanf("%s",str);

    for (int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
          str[i]=str[i]-32;  
        }
        else if(str[i]>='A' && str[i]<='Z'){
          str[i]=str[i]+32;  
        }
        printf("%c",str[i]);
    }
    return 0;
}