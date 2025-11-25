/*
Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    int x,y;
    printf("Enter matrices of array: ");
    scanf("%d%d",&x,&y);

    int arr[x][y];
    int tarr[y][x];

    for (int i = 0;i<x;i++){
        for (int j = 0;j<y;j++){
        printf("Enter integer at index (%d, %d):",i,j);
        scanf("%d",&arr[i][j]);
        }
    }

    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            tarr[j][i]=arr[i][j];
        }
    }

    for (int i = 0;i<y;i++){
        for ( int j = 0;j<x;j++){
            printf("%d\t",tarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}