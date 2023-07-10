// ? C program to check whether triangle is equilateral, scalene or isosceles
// [Input sides of a triangle from user. Store it in some variables say side1, side2 and side3.
// 1. Check if(side1 == side2 && side2 == side3), then the triangle is equilateral.
// 2. If it is not an equilateral triangle then it may be isosceles. Check if(side1 == side2
// || side1 == side3 || side2 == side3), then the triangle is isosceles.
// 3. If it is neither equilateral nor isosceles then it is a scalene triangle.]

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