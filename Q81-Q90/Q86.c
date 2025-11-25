/* Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);

    int count = 0;
    while(str[count] != '\0') {
        count++;
    }

    int palindrome = 1;

    for(int i = 0; i < count/2; i++) {
        if(str[i] != str[count - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}
