/* Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char name[50];
    scanf("%[^\n]s", name);

    int lastSpace = -1;

    for(int i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            lastSpace = i;
        }
    }

    for(int i = 0; i < lastSpace; i++) {
        if(i == 0 || name[i-1] == ' ') {
            char ch = name[i];
            if(ch >= 'a' && ch <= 'z') ch -= 32;
            printf("%c.", ch);
        }
    }

    printf(" ");
    for(int i = lastSpace + 1; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}

