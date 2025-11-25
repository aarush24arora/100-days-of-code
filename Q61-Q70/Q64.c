/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n;
    int digit;
    int frequency[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &n);


    while (n > 0) {
        digit = n % 10;
        frequency[digit]++;
        n = n / 10;
    }

    int maxcount = 0;
    int frequentdigit = 0;

    for (int i = 0; i < 10; i++) {
        if (frequency[i] > maxcount) {
            maxcount = frequency[i];
            frequentdigit = i;
        }
    }

    printf("%d", frequentdigit);
    return 0;
}
