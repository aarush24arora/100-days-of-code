/*
Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    int x,y;
    printf("Enter matrices of array: ");
    scanf("%d%d",&x,&y);

    int arr[x][y];

    for (int i = 0;i<x;i++){
        for (int j = 0;j<y;j++){
        printf("Enter integer at index (%d, %d):",i,j);
        scanf("%d",&arr[i][j]);
        }
    }

    for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
        printf("%d\t", arr[i][j]);
    }
    printf("\n");
}
    return 0;
}