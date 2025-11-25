/* Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[50];
    printf("Enter String: ");
    scanf("%s",str);

    for (int i=0;str[i]!='\0';i++){
        for (int j=(i+1);str[j]!='\0';j++){
            if(str[i]==str[j]){
                printf("%c",str[i]);
                return 0;
            }
        }
    }
    
    return 0;
}