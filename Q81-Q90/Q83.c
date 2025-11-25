/* Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[50];
    printf("Enter String: ");
    scanf("%s",str);

    int vowcount=0;
    int conscount=0;

    for (int i=0;str[i]!='\0';i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowcount++;
        }
        else{
            conscount++;
        }
    }
    printf("Vowels=%d, Consonant=%d",vowcount,conscount);
    
    return 0;
}