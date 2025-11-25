/* Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    int n, k;
    scanf("%d", &n);

    int arr[50], temp[50];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    k = k % n; 

    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
