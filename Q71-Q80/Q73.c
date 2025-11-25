/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

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

    for (int i=0;i<x;i++){
        int sum=0;
        for (int j=0;j<y;j++){
            sum+=arr[i][j];
        }
        printf("%d ",sum);
    }

    return 0;
}