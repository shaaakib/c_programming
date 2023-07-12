#include <stdio.h>
    int main(){
        int number1, number2;
        printf("Enter number : ");
        scanf("%d %d", &number1, &number2);
        if(number1> number2){
            printf("%d is largest number", number1);
        }else{
            printf("%d is largest number", number2);
        }
        return 0;
    }