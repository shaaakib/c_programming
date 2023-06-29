// ? Ques : Take 3 positive integers input and print the greatest of them.

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);
    if(a>b){ // b is out of race
        if(a>c)
            printf("%d is greatest",a);
        else
            printf("%d is greatest", c);
    }else { // b > a 
        if(b>c)
                printf("%d is greatest");
            else
                printf("%d is greatest", c);
    }
    return 0;
}