/* Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[100];
    scanf("%[^\n]s", str);

    int start = 0;
    for(int i = 0; ; i++){
        if(str[i] == ' ' || str[i] == '\0'){
            int end = i - 1;
            while(start < end){
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            if(str[i] == '\0') break;
            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}
