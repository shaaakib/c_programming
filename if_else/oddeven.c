#include <stdio.h>
int main() {
    int n; 
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n%2 == 0){ // even
        printf("Even Number!");
    }
    // if(n%2 != 0){ // odd
    //     printf("Odd Number");
    // }
    else{
        printf("Odd Number!");
    }
    return 0;
}