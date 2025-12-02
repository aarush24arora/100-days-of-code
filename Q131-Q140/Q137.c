/* Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>
enum roles{
    ADMIN,
    USER,
    GUEST,
};
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char user[10];
    enum roles message;
    printf("Enter role: ");
    scanf("%s",user);

    if(strcmp(user,"ADMIN")==0){
        message=ADMIN;
    }
    else if(strcmp(user,"USER")==0){
        message=USER;
    }
    else if(strcmp(user,"GUEST")==0){
        message=GUEST;
    }
    else{
        printf("INVALID INPUT!");
        return 1;
    }

    switch(message){
        case 0:
        printf("Hello Admin!");
        break;

        case 1:
        printf("Welcome User!");
        break;

        case 2:
        printf("Welcome Guest!");
        break;

        default:
        break;
    }
    return 0;
}