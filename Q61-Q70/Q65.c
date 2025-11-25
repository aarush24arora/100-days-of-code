/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter number to search for: ");
    scanf("%d", &key);

    int low = 0;
    int high = size - 1;
    int mid;
    int found_index = -1; 

    while (low <= high) {
        
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found_index = mid;
            break; 
        }
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        else {
            
            high = mid - 1;
        }
    }

    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }

    return 0;
}
