/* Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    int n, pos, val;
    scanf("%d", &n);

    int arr[50];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &val);

    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    n++;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
