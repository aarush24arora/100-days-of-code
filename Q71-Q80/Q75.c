/* Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int x, y;  
    int x1, y1; 

    printf("Enter dimensions of first array: ");
    scanf("%d%d", &x, &y);

    int arr[x][y]; 

    printf("Enter elements for first array:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter dimensions of second array: ");
    scanf("%d%d", &x1, &y1); 

    int arr2[x1][y1];
    int sumarr[x][y]; 

    printf("Enter elements for second array:\n");
    for (int i = 0; i < x1; i++) {
        for (int j = 0; j < y1; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }     

    if (x != x1 || y != y1) {
        printf("Error: Matrices are not the same size!\n");
        return 1; 
    }

    [j] + B[i][j] = C[i][j]
    printf("Sum of the matrices:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            sumarr[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < x; i++) { 
        for (int j = 0; j < y; j++) { 
            printf("%d ", sumarr[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}