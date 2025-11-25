/* Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[50];
    printf("Enter String: ");
    scanf("%s",str);


    for (int i=0;str[i]!='\0';i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            continue;
        }
        else{
            printf("%c",str[i]);
        }
    }
    
    return 0;
}