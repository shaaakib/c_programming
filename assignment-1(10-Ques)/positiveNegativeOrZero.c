// ? Write a C Program to check positive, negative or zero using simple if.
#include <stdio.h>
    int main() {
        int num;
        printf("Enter a number : " );
        scanf("%d", &num);

        if(num>0)
            printf("Positive");
        else if(num == 0)
            printf("Zero");
        else
            printf("Negative");
        return 0;
    }