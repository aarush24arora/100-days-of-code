/* Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if(r != c) {
        printf("False");
        return 0;
    }

    for(int i = 0; i < r; i++) {
        for(int j = i + 1; j < r; j++) {
            if(arr[i][i] == arr[j][j]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
