// ? C program to check whether triangle is valid or not if sides are given
// [A triangle is valid if the sum of its two sides is greater than the third side. Means if a, b,
// c are three sides of a triangle. Then the triangle is valid if all three conditions are satisfied
// a + b > c, a + c > b and b + c > a]
#include <stdio.h>
int main(){
     double side1, side2, side3;
     printf("Enter side : ");
     scanf("%lf %lf %lf", &side1, &side2, &side3);

     if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
     {
          printf("Yes. It can be a triangle\n");
     }
     else
     {
          printf("Yes. It can't be a triangle\n");
     }
    return 0;
}