// ? C program to check whether a number is positive, negative or zero
#include <stdio.h>
    int main(){
        int num;
        printf("Enter Number : ");
        scanf("%d", &num);
        if(0<num){
            printf("Positive");
        }else if(0 == num){
            printf("Zero");
        } else{
            printf("Negative");
        }
        return 0;
    }