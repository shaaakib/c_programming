// ? C program check whether a number is even or odd
#include <stdio.h>
int main(){
    int num;
    printf("Enter numer : ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("Even number");
    }else {
        printf("Odd number");
    }
    return 0;
}