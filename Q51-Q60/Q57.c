/*
Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int size,sum;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    for (int i=0;i<size;i++){
        printf("Enter integer at index %d:",i);
        scanf("%d",&arr[i]);
    }
    sum=0;
    for (int i=0; i < size; i++) {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}