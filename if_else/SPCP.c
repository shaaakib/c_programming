#include <stdio.h>
int main () {
    int cp;
    printf("Enter cost price : ");
    scanf("%d", &cp);
    int sp;
    printf("Enter selling price : ");
    scanf("%d", &sp);
    if(sp>cp){
        printf("Profit!");
    }
    if(cp>sp){
        printf("Loss!");

    }if(sp == cp){
        printf("No profit, no Loss!");
        
    }
    return 0;
}