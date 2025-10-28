/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int num1,num2,result;
    char op;
    printf("Enter numbers and operation to be done(+ , - , * , / , %%.)");
    scanf("%d%d %c",&num1,&num2,&op);

    switch(op)
{
    case '+':
    result=num1 + num2;
    printf("%d",result);
    break;

    case '-':
    result=num1 - num2;
    printf("%d",result);
    break;

    case '*':
    result=num1 * num2;
    printf("%d",result);
    break;

    case '/':
    result=num1 / num2;
    printf("%d",result);
    break;

    case '%':
    result=num1 % num2;
    printf("%d",result);
    break;

    default:
    break;
}

    return 0;

}