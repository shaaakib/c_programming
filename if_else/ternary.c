#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    // ternary operator 
    // exp1 ? exp2 : exp3
    n%2==0 ? printf("Even number") : printf("Odd number");



    // if(n%2==0)
    //     printf("Even Number")
    // else
    //     printf("Odd Number")
    return 0;
}