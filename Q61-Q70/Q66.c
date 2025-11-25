/* Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    int n, x, pos;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[50];

    printf("Enter sorted array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = 0;
    while(pos < n && arr[pos] < x) {
        pos++;
    }

    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = x; 
    n++;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
