/* Q139: Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include <stdio.h>
enum status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    printf("SUCCESS = %d", SUCCESS);
    printf(", FAILURE = %d", FAILURE);
    printf(", TIMEOUT = %d", TIMEOUT);

    return 0;
}
