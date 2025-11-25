/*
Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int size,search;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    for (int i=0;i<size;i++){
        printf("Enter integer at index %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter number to find: ");
    scanf("%d",&search);
    for (int i=0; i < size; i++) {
        if(arr[i]==search){
            printf("Found at index %d",i);
        }
    }
    printf("-1");
    return 0;
}