/* Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char name[50];
    scanf("%[^\n]s",name);

    for(int i=0;name[i]!='\0';i++){
        if(i==0){
            if(name[i]>='a' && name[i]<='z'){
            name[i] = name[i] - 32;
            }
            printf("%c.",name[i]);
        }
        else if(name[i-1]==' '){
            if(name[i]>='a' && name[i]<='z'){
            name[i] = name[i] - 32;
            }
            printf("%c.",name[i]);
        }
    }
    return 0;
}