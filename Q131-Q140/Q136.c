/* Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>
enum menu{
    ADD,
    SUBTRACT,
    MULTIPLY,
};
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char op[10];
    enum menu oper;
    int x;
    int y;
    printf("Enter Operation and numbers seperated by spaces(ADD/SUBTRACT/MULTIPLY): ");
    scanf("%s %d %d",op,&x,&y);

    if(strcmp(op,"ADD")==0){
        oper=ADD;
    }
    else if(strcmp(op,"SUBTRACT")==0){
        oper=SUBTRACT;
    }
    else if(strcmp(op,"MULTIPLY")==0){
        oper=MULTIPLY;
    }
    else{
        printf("INVALID INPUT!");
        return 1;
    }

    switch(oper){
        case 0:
        printf("%d",x+y);
        break;

        case 1:
        printf("%d",x-y);
        break;

        case 2:
        printf("%d",x*y);
        break;

        default:
        break;
    }
    return 0;
}