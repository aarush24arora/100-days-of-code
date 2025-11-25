/* Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    if(r != c){
        printf("Not Symmetric");
        return 0;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j] != arr[j][i]){
                printf("Not Symmetric");
                return 0;
            }
        }
    }

    printf("Symmetric");
    return 0;
}
