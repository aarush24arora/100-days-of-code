/* Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int start = 0; start < c; start++){
        int i = 0, j = start;
        while(i < r && j >= 0){
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
    }

    for(int start = 1; start < r; start++){
        int i = start, j = c-1;
        while(i < r && j >= 0){
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
