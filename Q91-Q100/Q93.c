/* Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
int main() {
    rintf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char str1[50], str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int count1 = 0, count2 = 0;

    for(int i = 0; str1[i] != '\0'; i++) {
        count1++;
    }
    for(int i = 0; str2[i] != '\0'; i++) {
        count2++;
    }

    if(count1 != count2) {
        printf("Not anagrams");
        return 0;
    }

    int flag = 1;
    for(int i = 0; i < count1; i++) {
        int found = 0;
        for(int j = 0; j < count2; j++) {
            if(str1[i] == str2[j]) {
                found = 1;
                str2[j] = '0';
                break;
            }
        }
        if(found == 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
