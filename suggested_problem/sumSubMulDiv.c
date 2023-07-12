#include <stdio.h>
int main(){
    float num1, num2;
    printf("Enter 1st number : ");
    scanf("%f", &num1);
    printf("Enter 2nd number : ");
    scanf("%f", &num2);

    printf("Sum %.2f\n", num1 + num2);

    if(num1>num2){
        printf("Subtraction %.2f\n", num1 - num2);
    }else{
        printf("Not subtraction\n");
    }

    printf("Multiplication %.2f\n", num1 * num2);
    
    if(num2 !=0){
        printf("division %.2f\n", num1 / num2);
    }else{
        printf("Not Divide\n");
    }

    return 0;
}