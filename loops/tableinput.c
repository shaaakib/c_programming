// ? HW : Print the table of ‘n’. Here ‘n’ is a integer which user will input.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = n; i<=200; i = i + n){
        printf("%d ", i);
    }
    return 0;
}