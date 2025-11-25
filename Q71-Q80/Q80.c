/* Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main() {

    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int r, c, r1, c1;

    scanf("%d %d", &r, &c);
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d %d", &r1, &c1);
    int arr1[r1][c1];
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    if (c != r1) {
        printf("Matrix multiplication is not possible");
        return 0;
    }

    int farr[r][c1];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c1; j++){
            farr[i][j] = 0;
            for (int k = 0; k < c; k++){
                farr[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", farr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
