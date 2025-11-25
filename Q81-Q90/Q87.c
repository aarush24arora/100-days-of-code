/* Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    int space=0;
    int digit=0;
    int special=0;
    for (int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            space++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // alphabet handling
        }
        else{
            special++;
        }
    }
    printf("Spaces=%d, digits=%d, special=%d",space,digit,special);

    return 0;
}