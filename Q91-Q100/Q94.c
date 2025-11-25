/* Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
/* Q94: Find the longest word in a sentence */

#include <stdio.h>
#include <string.h>

int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[100];
    scanf("%[^\n]s", str);

    char longest[50], temp[50];
    int maxlength = 0, currlength = 0;
    int j = 0;

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] != ' ') {
            temp[j] = str[i];
            j++;
            currlength++;
        }
        else {
            temp[j] = '\0';
            if(currlength > maxlength) {
                maxlength = currlength;
                strcpy(longest, temp);
            }
            currlength = 0;
            j = 0;
        }
    }

    temp[j] = '\0';
    if(currlength > maxlength) {
        strcpy(longest, temp);
    }

    printf("%s", longest);

    return 0;
}
