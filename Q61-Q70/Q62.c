/*
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    for (int i=0;i<size;i++){
        printf("Enter integer at index %d:",i);
        scanf("%d",&arr[i]);
    }
    int start=0;
    int end=size-1;
    int temp;
    while (start < end) {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("\nThe reversed array is: \n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}