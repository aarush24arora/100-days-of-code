/* Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main(){

    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    int size;

    printf("Enter the size of the array:");
    scanf("%d",&size);

    int arr[size];

    for (int i=0;i<size;i++){
        printf("Enter integer at index %d:",i);
        scanf("%d",&arr[i]);
    }

    int largest,secondlargest;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondlargest = arr[1];
    } else {
        largest = arr[1];
        secondlargest = arr[0];
    }

    for (int j = 2; j < size; j++) {
        if (arr[j] > largest) {
            secondlargest = largest; 
            largest = arr[j];       
        } else if (arr[j] > secondlargest && arr[j] != largest) {
            secondlargest = arr[j]; 
        }
    }
    
    if (largest == secondlargest) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("The second largest integer is: %d\n", secondlargest);
    }

    return 0;
}