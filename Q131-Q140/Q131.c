/* Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/
#include <stdio.h>
enum days{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};

int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    printf("SUNDAY = %d",Sunday);
    printf("\nMONDAY = %d",Monday);
    printf("\nTUESDAY = %d",Tuesday);
    printf("\nWEDNESDAY = %d",Wednesday);
    printf("\nTHURSDAY = %d",Thursday);
    printf("\nFRIDAY = %d",Friday);
    printf("\nSATURDAY = %d",Saturday);

    return 0;
}