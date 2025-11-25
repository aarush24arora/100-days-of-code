/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int size1,size2;
    printf("Enter size of first array: ");
    scanf("%d",&size1);

    int arr[size1];

    for (int i=0;i<size1;i++){
        printf("Enter integer at index %d:",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d",&size2);

    int arr2[size2];

    for (int i=0;i<size2;i++){
        printf("Enter integer at index %d:",i);
        scanf("%d",&arr2[i]);
    }

    int mergedarray[size1+size2];

    for (int i=0;i<size1;i++){
        mergedarray[i]=arr[i];
    }
    for(int i=0;i<size2;i++){
        mergedarray[size1+i]=arr2[i];
    }
    
    printf("The merged array:\n");
    for(int i=0;i<(size1+size2);i++){
        printf("%d\t",mergedarray[i]);
    }
    return 0;
}