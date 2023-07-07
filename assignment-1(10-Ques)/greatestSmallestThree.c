// ? C program to find the greatest and smallest number among three numbers.
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);
    printf("Enter 3rd Number : ");
    scanf("%d", &c);

    // greatest Number 
    if(a>b && a>c)
        printf("%d is greatest \n", a);
    else if(b>a && b>c)
        printf("%d is greatest \n", b);
    else
        printf("%d is greatest \n", c);

    // smallest number 
    if(a<b && a<c)
        printf("%d is smallest \n", a);
    else if(b<a && b<c)
        printf("%d is smallest \n", b);
    else
        printf("%d is smallest \n", c);
    return 0;
}
