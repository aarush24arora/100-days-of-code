/* Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>
enum genders{
    MALE,
    FEMALE,
    OTHER,
};
struct person{
    enum genders gender;
};

    struct person p;

int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    char gen[10];
    printf("Enter gender: GENDER= ");
    scanf("%s",gen);

    if (strcmp(gen,"MALE")==0){
        p.gender=MALE;
    }
    else if(strcmp(gen,"FEMALE")==0){
        p.gender=FEMALE;
    }
    else if(strcmp(gen,"OTHER")==0){
        p.gender=OTHER;
    } 
    else{
        printf("Invalid Input !");
        return 1;
    }
    
    switch(p.gender){
        case MALE:
        printf("Male");
        break;

        case FEMALE:
        printf("Female");
        break;

        case OTHER:
        printf("Other");
        break;

        default:
        break;
    }

    return 0;
}