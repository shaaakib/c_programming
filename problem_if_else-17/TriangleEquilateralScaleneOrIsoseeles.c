#include <stdio.h>
int main(){
    int side1, side2, side3;
        printf("Enter side : ");
        scanf("%d %d %d", &side1, &side2, &side3);
    if(side1 == side2 && side2 == side3){
        printf("the triangle is equilateral");
    }else if(side1 == side2 || side1 == side3 || side2 == side3){
        printf("the triangle is isosceles");
    }else{
        printf("It is a scalene triangle");
    }

    return 0;
}